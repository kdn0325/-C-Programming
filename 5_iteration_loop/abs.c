#include <stdio.h>

int main(void)
{
    int x = -150;
    if(x<0)
    {
        x = -x;
    }
    printf("x의 절댓값은 %d\n",x);
    return 0;
}