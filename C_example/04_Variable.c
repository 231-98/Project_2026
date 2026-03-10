#include <stdio.h>

int main(void) {
    
    int kor, eng, math;
    printf("국어 점수 입력: ");
    scanf("%d", &kor);

    printf("영어 점수 입력: ");
    scanf("%d", &eng);

    printf("수학 점수 입력: ");
    scanf("%d", &math);
    int sum = (kor + eng + math)/3;
    
    printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, math);
    printf("총점 : %d\n", sum);
}
