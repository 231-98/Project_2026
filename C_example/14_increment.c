#include <stdio.h>

int main(void){
    int a, b;
    a = 5;
    b = ++a;
    printf("a : %d \t b : %d\n", a, b); // a : 6, b : 6
    
    a = 5;
    b = a++;
    printf("a : %d \t b : %d\n", a, b); // a : 6, b : 5 출력 후 ->  6

    
    printf("a : %d \t a++ : %d\n", a, a++); // a : 6, b : 6 출력 후 -> 7
    printf("a : %d \t ++a : %d\n", a, ++a); // a : 7, b : 8
    return 0;
    
}