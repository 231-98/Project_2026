#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a, b;
    int greater = false;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);

    greater = a > b;
    printf("greter의 값은 %d이다.\n", greater); // true -> 1 false -> 0

    if (greater == true){
        printf("a가 더 크다.\n");
    }
    else{
        printf("a가 더 작다\n");
    }
    return 0;
}