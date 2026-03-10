#include <stdio.h>
#include <string.h> // 문자열 전처리기

int main(){
    char fruit[20] = "Strawberry";
    printf("딸기 : %s\n", fruit);
    printf("딸기잼 : %s%s\n", fruit, "jam");
    strcpy(fruit, "banana"); // 문자열 복사 strcpy(str1, str2) str1 -> str2로 변경
    printf("바나나 : %s\n", fruit);
    printf("fruit : %s\n", fruit);
    fruit[0] = 'a';
    fruit[1] = 'p';
    fruit[2] = 'p';
    fruit[3] = 'l';
    fruit[4] = 'e';
    fruit[5] = '\0';
    printf("사과 : %s\n", fruit);
    return 0;

}