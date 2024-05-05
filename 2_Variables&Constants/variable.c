#include <stdio.h>

int main(void)
{
    int x = 50;
    // float형은 최대 출력이 4byte까지 출력이 안되서 4byte 이외 값들은 garbage로 빠짐
    float y = 1251124.12412412;
    // double형은 최대 8byte까지 출력이 가능하다
    double z = 1251124.12412412;
    printf("x=%d\n");
    // 실수 .2f로 소수점 2번째까지 출력
    printf("y=%.2f\n",y);
    printf("z=%.2f\n",y);
    return 0;
}