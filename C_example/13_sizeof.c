#include <stdio.h>
#include <stdint.h>

int main(void){
    
    int num;
    printf("sizeof(char) : %ld\n", sizeof(char)); // 1byte
    printf("sizeof(short) : %ld\n", sizeof(short)); // 2
    printf("sizeof(int) : %ld\n", sizeof(int)); // 4
    printf("sizeof(uint) : %ld\n", sizeof(uint32_t)); // 4
    printf("sizeof(num) : %ld\n", sizeof(num)); // 4
    printf("sizeof(float) : %ld\n", sizeof(float)); // 4
    printf("sizeof(long) : %ld\n", sizeof(long)); // 8d
    printf("sizeof(double) : %ld\n", sizeof(double)); // 8
    printf("sizeof(3.141592) : %ld\n", sizeof(3.141592)); // 8
    return 0;
}