#include <stdio.h>

int main(void)
{
    int x = 50 , y = 30;
    printf("x가 y보다 크고 y는 40 미만입니까? %d\n",(x>y) && (y < 40));
    // 1
    printf("x가 y보다 작거나 y는 30입니까? %d\n",(x<y) || (y == 30));
    // 1
    printf("x가 50이 아닙니까? %d\n",x!=50);
    // x는 50이다
    return 0;
}
