int main(){
    asm volatile("lui s1,0x030000;");
    asm volatile("jalr x0,0(s1);");
}