#include <stdio.h>

int main(void)
{
   int x = 0;
   printf("현재의 x는 %d입니다",x);
   x++;
   printf("현재의 x는 %d입니다",x);
   // 증감이 뒤에 나오면 변수는 출력이 되고 증감이 이루어짐
   printf("현재의 x는 %d입니다",x--);
   // 따라서 x의 값은 0이 나옴
   printf("현재의 x는 %d입니다",x);
   // 증감이 앞에 나오면 증감이 이루어지고 출력됌.
   printf("현재의 x는 %d입니다",--x);
   return 0;
}