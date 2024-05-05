#include <stdio.h>

int main(void)
{
    int x;
    // Int형 기본 메모리 4byte를 차지함
    x = 5;
    printf("변수 x의 메모리 크기 %d.",sizeof(x));
    return 0;
}