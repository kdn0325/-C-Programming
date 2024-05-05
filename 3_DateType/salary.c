#include <stdio.h>
// define은 상수에 대한 정의
#define MONTHS 12

int main(void)
{
    double monthSalary = 1000.5;
    printf("$ %.2f",monthSalary*MONTHS);
    printf("$ %.2f",monthSalary*MONTHS);
    return 0;
}