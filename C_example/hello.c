#include <stdio.h> // 표준 입출력 라이브러리
#include <stdlib.h> // 유틸리티 함수

int sum(int x, int y);

int main(void){
    int a, b;
    printf("두 숫자를 입력해주세요 :\n");
    scanf("%d %d", &a, &b);

    int value = sum(a, b);
    
    printf("result : %d\n", value);
    
    return 0;
}

int sum(int x, int y){
    return x + y;
}