#include <stdio.h>

// 배열 만들때 상수데이터로 배열의 크기를 지정
#define NUMBER 5
#include <limits.h>

int main(void)
{
    int i , max , min,index;
    int array[NUMBER];
    max = 0;
    min = INT_MAX;
    index = 0;
    for(i=0; i<NUMBER; i++)
    {
        scanf("%d",&array[i]);
        if(max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d입니다 그리고 %d번째에 있습니다\n",max, index+i);
    for(i=0; i<NUMBER; i++)
    {
        scanf("%d",&array[i]);
        if(min > array[i])
        {
            min = array[i];
            index = i;
        }
    }
    printf("가장 작은 값은 %d입니다 그리고 %d번째에 있습니다\n",min, index+i);
    return 0;
}