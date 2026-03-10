#include <stdio.h>
#include <stdbool.h>

// 대소문자 비교
int main(){
    char ch;
    printf("문자를 입력하세요 : ");
    scanf("%c", &ch);

    bool isBig;
    isBig = ('A' <= ch && ch <= 'Z');
    printf("%c는 %s입니다.", ch, isBig ?"대문자":"소문자");

}