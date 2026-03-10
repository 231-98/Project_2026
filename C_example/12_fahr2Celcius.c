#include <stdio.h>

int main(){
    // Fahr to Celsius
    int celsius;
    double fahr;
    printf("온도를 입력하세요(℉) : ");
    scanf("%lf", &fahr);
    // fahr = 1.8 * (double)celsius + 32.0;
    celsius = ((double)fahr - 32.0) / 1.8;
    printf("F(fahr) 온도 : %.2f\n", fahr);
    printf("C(celsius) 온도 : %2f\n", celsius);
    return 0;
}
