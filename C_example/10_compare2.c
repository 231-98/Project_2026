#include <stdio.h>

int main(void){
    int num;
    printf("숫자를 입력하세요(1 ~ 9) : ");
    scanf("%d", &num);

    printf("1 < = %d <= 9 : %s\n", num, (1<=num) && (num<= 9)? "true":"false"); // 삼항연산자(condition) ? value1 : value2;
    return 0;

}