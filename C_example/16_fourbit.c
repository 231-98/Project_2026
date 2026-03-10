#include <stdio.h>
#include <stdint.h>

int main(){

    uint8_t attr; // 8 bit 1111111
    attr = attr ^ attr;// xor 연산 1 -> 0으로 초기화
    attr = attr | 0b00000001; // or 연산 00000000 or 00000001 -> 00000001
    printf("attr : 0x%02x\n", attr);
    attr = attr | (0b00000010 + 0b00000100); // 00000001 or 00000110 -> 00000111 7(10진법)
    printf("attr : 0x%02x\n", attr);
    attr = attr & (~0b00000001); // 00000111 and 11111110 -> 00000110 6(10진법)
    printf("attr : 0x%02x\n", attr);\
    return 0;
}