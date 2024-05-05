#include <stdio.h>

// 전역 변수

int hour;
int mimute;
int minuteAdd;

void counter()
{
    mimute += minuteAdd;
    hour += mimute/60;
    mimute %= 60;
    hour %= 24;
    return mimute;
}

int main(void)
{
    printf("시간을 입력해주세요. : ");
    scanf("%d",&hour);
    printf("분을 입력해주세요. : ");
    scanf("%d",&mimute);
    printf("더할 분을 입력해주세요. : ");
    scanf("%d",&minuteAdd);
    counter();
    printf("더해진 시간은 %d시 %d분 %d분 입니다\n",hour,mimute);
    return 0;
    
}