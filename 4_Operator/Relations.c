#include <stdio.h>

int main(void)
{
    // 참은 1이 출력됌
    // 거짓은 0이 출력됌
    int x = 50 , y = 30;
    // x가 y와 같은 값을 가지고 있는가?
    printf("x가 y와 같은가? %d\n",x==y);
    // 0
    printf("x가 y와 다른가? %d\n",x!=y);
    //1
    printf("x가 y보다 큰가? %d\n",x>y);
    //1
    printf("x가 y보다 작은가? %d\n",x<y);
    // 0
    printf("x에 y값을 넣으면? %d\n",x=y);
    // 30
    return 0;
}
