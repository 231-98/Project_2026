#include <stdio.h>
#include <limits.h> // 기본 데이터 타입의 범위정보 제공

#define END_HELLO "END of file\n"

int main(void){
    printf("char_bit : %d\n", CHAR_BIT); // char 비트수 : 8bit
    printf("char_max : %d\n", CHAR_MAX); // char 최대값
    printf("char_min : %d\n", CHAR_MIN); // char 최소값
    printf("int_max : %d\t", INT_MAX); // int최대값
    printf("int_min : %d\n", INT_MIN); // int 최소값
    printf("LONG_MAX : %ld \t", LONG_MAX); // long 최대값
    printf("LONG_MIN : %ld\n", LONG_MIN);// long 최소값

    // printf("%d", 2147483648); 
    printf(END_HELLO);
    return 0;
}

