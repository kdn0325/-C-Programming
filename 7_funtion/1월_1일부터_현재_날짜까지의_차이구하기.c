#include <stdio.h>

// 1월 1일부터 해당 날짜까지의 일수 차이 계산

int getDays(int month,int day)
{
    int i, sum=0;
    for(i=1; i<month; i++)
    {
        if(i==2) // 윤년 계산 없음
        {
            sum += 28;
        }
        else if(i%2==0)
        {
            sum += 30;
        }
        else
        {
            sum += 31;
        }
    }
    return sum+day;
}

int main(void)
{
    int month,day,i;
    scanf("%d %d",&month,&day);
    printf("1월 1일부터 해당 날짜의 거리는 %d일입니다.",getDays(month,day));
    return 0;
    
}