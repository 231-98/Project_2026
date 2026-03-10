#include <stdio.h>

int main(void) {
    int kor, eng, math;
    int sum = (kor + eng + math)/3;

    printf("국어 : %d, 영어 : %d, 수학 : %d", kor, eng, math);
    printf("총점 : %d", sum);
}