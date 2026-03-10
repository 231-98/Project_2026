#include <stdio.h>

int main(void){
    
    int num;
    char *isOdd;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        isOdd = "짝수";
        break;
    case 1:
        isOdd = "홀수";
        break;
    }

    printf("숫자 %d는 %s입니다.", num, isOdd);

    return 0;
}