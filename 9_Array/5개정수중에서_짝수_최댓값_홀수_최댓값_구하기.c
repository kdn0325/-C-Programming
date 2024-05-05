#include <stdio.h>

// 배열 만들때 상수데이터로 배열의 크기를 지정
#define NUMBER 5
#include <limits.h>

int main(void)
{
    int i , oddMax , evenMax;
    int array[NUMBER];
    oddMax = 0;
    evenMax = 0;
    for(i=0; i<NUMBER; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            if(evenMax < array[i]);
            {
                evenMax = array[i];
            }
        }else
        {
            if(oddMax < array[i]);
            {
                oddMax = array[i];
            }
        }
    }
    printf("가장 홀수 중 큰 값은 %d입니다 짝수 중 가장 작은 값은 %d입니다\n",oddMax, evenMax);
    return 0;
}