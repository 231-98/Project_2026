#include <stdint.h>
#include <stdio.h>
#define BOLD 0x01
#define ITALIC (0x01 << 1)
#define SHADOW (0x01 << 2)
#define UNDERLINE (0x01 << 3)

int main(){

    uint8_t attr; // 8 bit 1111111
    attr = attr ^ attr;// xor 연산 1 -> 0으로 초기화
    attr = attr | BOLD; // or 연산 00000000 or 00000001 -> 00000001
    printf("attr : 0x%02x\n", attr);
    attr = attr | (ITALIC+ SHADOW); // 00000001 or 00000110 -> 00000111 7(10진법)
    printf("attr : 0x%02x\n", attr);
    attr = attr & (~BOLD); // 00000111 and 11111110 -> 00000110 6(10진법)
    printf("attr : 0x%02x\n", attr);

    if (attr & BOLD){ // 00000110 and 00000001 -> 0
        printf("BOLD 옵션은 활성화 되었습니다.");
        
    }
    else if((attr & ITALIC) >> 1){
        printf("ITALIC 옵션은 활성화 되었습니다.");
    }
    else{
        printf("BOLD 옵션은 비활성화 되었습니다.");
    }

    
    return 0;
}