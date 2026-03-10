#include <stdio.h>

int main(void){
    int man, woman;
    double sum, manRate, womanRate;
    printf("남자 수 : ");
    scanf("%d", &man);
    printf("여자 수 : ");
    scanf("%d", &woman);
    
    sum = man + woman;
    womanRate = woman / sum * 100;
    manRate = man / sum * 100;
    printf("남자의 수는 %d명이고, 여자의 수는 %d명이다.\n", man, woman);
    printf("총원 : %.f명, 남자 비율 : %.2f, 여자비율 %.2f 명이다.\n", sum, manRate, womanRate);

    return 0;  

}