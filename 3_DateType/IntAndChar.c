#include <stdio.h>

//int형 char형 바꿀수 있음

int main(void)
{
    //char은 숫자형으로 구성됌 그래서 65는 A라고 표현됌 char x = 'A' = char x = 65;
    // char x = 'A';
    char x = 65;
    printf("%c\n",x);
    char y = 65;
    printf("%c\n",y);
    char z = 'B';
    printf("%d\n",z);
    return 0;
}