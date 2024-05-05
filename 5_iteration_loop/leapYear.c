#include <stdio.h>

int main(void)
{
    /* 윤년 => 4년 마다 , 그렇지만 100년 단위 일 때 윤년에 해당하지 않도록 */
    /* 윤년 => 400년 단위로 어떤 상황이든간에 윤년으로 설정 */

    int year = 2024;
    if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
    {
        printf("%d년은 윤년입니다",year);
    }
    else
    {
        printf("%d년은 윤년이 아닙니다.",year);
    }
    return 0;
}