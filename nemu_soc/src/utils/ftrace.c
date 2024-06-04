#include <utils.h>
#include <common.h>
#include <elf.h>

#define FUNC_NUM	5000
int func_cnt = 0;
int output_cnt = 0;

struct FUNC_TRACE{
	Elf32_Sym symbol;
	char str[100];
}func_trace[FUNC_NUM];

// Elf32_Sym symbol[SYM_NUM] = {0};

FILE *elf_fp = NULL;

static void ReadDataFromFile(void *buffer,uint32_t size, uint32_t n, uint32_t offset, FILE *elf_fp){
	int ret = 0;
	ret = fseek(elf_fp, offset, SEEK_SET);
	Assert(ret >= 0, "The offset of fseek elf_file is out of range!\n");
	ret = fread(buffer, size, n, elf_fp);
	Assert(ret == n, "The size of fread elf_file is not equal!\n");
}

void init_ftrace(const char *elf_file){
	elf_fp = stdout;
	if (elf_fp != NULL) {
		FILE *fp = fopen(elf_file, "r");
		Assert(fp, "Can not open elf_file '%s'", elf_file);
		elf_fp = fp;
	}
	Log("ELF is read from %s", elf_file ? elf_file : "stdout");
	// 遇到stack smashing detected需要将buffer调大
	uint8_t buffer[20000] = {0};
	Elf32_Ehdr elf_hdr = {0};      // ELF文件信息头
	Elf32_Shdr sym_hdr = {0};   // 符号表头
  	Elf32_Shdr str_hdr = {0};   // 字符串表头
	
	// Read ELF Header
	ReadDataFromFile(&elf_hdr,sizeof(Elf32_Ehdr), 1, 0, elf_fp);
	Assert(strstr((char *)elf_hdr.e_ident,"ELF")!=NULL,"The type of file is not elf\n");

	// Read Section Headers
	ReadDataFromFile(&buffer,sizeof(Elf32_Shdr), elf_hdr.e_shnum, elf_hdr.e_shoff, elf_fp);
	
	const Elf32_Shdr* pShdr = (const Elf32_Shdr *) buffer;
	for (int i = 0; i < elf_hdr.e_shnum; i++){
		// Search for symbol tab
		if (pShdr[i].sh_type == SHT_SYMTAB){
			memcpy(&sym_hdr, &pShdr[i], sizeof(Elf32_Shdr));
		}
		// Search for string tab
		if (pShdr[i].sh_type == SHT_STRTAB){
			memcpy(&str_hdr, &pShdr[i], sizeof(Elf32_Shdr));
			break;	// don't found shshtrtab
		}
	}
	Assert(sym_hdr.sh_offset != 0, "The symbol header is not found\n");
	Assert(str_hdr.sh_offset != 0, "The string header is not found\n");

	// Read symtab
	int number = sym_hdr.sh_size/sizeof(Elf32_Sym);
	ReadDataFromFile(&buffer, sizeof(Elf32_Sym), number, sym_hdr.sh_offset, elf_fp);
	const Elf32_Sym* pSym = (const Elf32_Sym *) buffer;
	for(int i=0; i<number; i++){
		if((pSym[i].st_info & 0x0f) == STT_FUNC){
			//printf("%x %d\n",pSym[i].st_value,pSym[i].st_name);
			memcpy(&func_trace[func_cnt++].symbol, &pSym[i], sizeof(Elf32_Sym));
		}
	}
	Assert(func_cnt < FUNC_NUM, "The number of symbol is out of range, please increse the SYM_NUM\n");

	// for(int i=0; i<sym_cnt; i++){
	// 	printf("%x %x\n",symbol[i].st_value,symbol[i].st_info);
	// }

	ReadDataFromFile(&buffer, str_hdr.sh_size, 1, str_hdr.sh_offset, elf_fp);

	for(int i=0; i<func_cnt; i++){
		strcpy(func_trace[i].str,(char *)&buffer[func_trace[i].symbol.st_name]);
	}
	
	// for(int i=0; i<func_cnt; i++){
	// 	printf("%x %d %s\n",func_trace[i].symbol.st_value,func_trace[i].symbol.st_name,func_trace[i].str);
	// }

	// printf("%s\n",buffer+39);
	// for(int i=0; i<str_hdr.sh_size; i++){
	// 	if(buffer[i] == '\0'){
	// 		buffer[i] = '\n';
	// 	}
	// }
	// buffer[str_hdr.sh_size] = '\0';
	// printf("%s\n",buffer);
	
}
void print_space(uint32_t address, int  n){
	printf("0x%8x:",address);
	for(int i=0; i<n; i++){
		printf("  ");
	}
}

void ftrace_print(uint32_t pc, uint32_t npc,uint32_t inst){
	for(int i=0; i<func_cnt; i++){
		if(inst == 0x00008067 && (pc >= func_trace[i].symbol.st_value && pc <= func_trace[i].symbol.st_value + func_trace[i].symbol.st_size )){
			print_space(pc,output_cnt);
			printf("ret  [%s]\n",func_trace[i].str);
			output_cnt--;
			return ;
		}
		if(npc == func_trace[i].symbol.st_value){
			print_space(pc,output_cnt);
			printf("call [%s@0x%8x]\n",func_trace[i].str,npc);
			output_cnt++;
			return ;
		}
	}
	
}

