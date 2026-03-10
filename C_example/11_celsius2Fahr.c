#include <stdio.h>

int main(){
    int celsius;
    printf("온도를 입력하세요 : ");
    scanf("%d", &celsius);
    double fahr;
    fahr = 9.0 / 5.0 * (double)celsius + 32.0;
    printf("F(fahr) 온도 : %.2f\n", fahr);
    printf("C(celsius) 온도 : %d\n", celsius);
    return 0;
}