#include <stdio.h>

// 특정한 금액을 받아서 가장 적은 거스름 화폐 개수를 구하는 함수

int smallest(int number)
{
    int count = 0;
    while(number>=50000)
    {
        number -= 50000;
        count++;
    }
    while(number>=10000)
    {
        number -= 10000;
        count++;
    }
    while(number>=5000)
    {
        number -= 5000;
        count++;
    }
    while(number>=1000)
    {
        number -= 1000;
        count++;
    }
    while(number>=500)
    {
        number -= 500;
        count++;
    }
    while(number>=100)
    {
        number -= 100;
        count++;
    }
    while(number>=50)
    {
        number -= 50;
        count++;3
    }
    while(number>=10)
    {
        number -= 10;
        count++;
    }
    return count;
}

int main(void)
{
    int number;
    printf("금액을 입력하세요 : ");
    scanf("%d",&number);
    printf("최소로 할 수 있는 화폐의 개수는 %d입니다.",smallest(number));
    return 0;
    
}