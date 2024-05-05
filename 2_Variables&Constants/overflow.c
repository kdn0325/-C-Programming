#include <stdio.h>
// INT_MAX를 추가하려면 자료형의 한계값들을 가져오는 라이브러리를 가져와야함
#include <limits.h>

int main(void)
{
    int x = INT_MAX;
    printf("int형의 최대값 x는 %d.\n");
    printf("x+1은 %d.",x+1);
    //int형의 최대값 x는 147819144. => 최댓값
    //x+1은 -2147483648 => 최소값
    return 0;
}