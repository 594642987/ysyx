run:
	riscv64-linux-gnu-gcc char-test.c -o char-test.elf -Wextra -nostdlib -nostartfiles \
	-fno-pic -march=rv32e_zicsr -mabi=ilp32e -mcmodel=medany -mstrict-align -O2
	riscv64-linux-gnu-objcopy -O binary -j .text char-test.elf char-test.bin
	riscv64-linux-gnu-objdump -d char-test.elf
clean:
	rm char-test.elf char-test.bin