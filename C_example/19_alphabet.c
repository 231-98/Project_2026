#include <stdio.h>
#include <stdbool.h>

int main(void){
    char input;
    bool isalphabet;
    printf("문자를 입력해주세요 : ");
    scanf("%c", &input);
    isalphabet = ('A' <= input &&  input <= 'Z') || ('a' <= input &&  'z' >=input);
    printf("%c는 %s", input, isalphabet?"알파벳입니다.":"알파벳이 아닙니다.");
}