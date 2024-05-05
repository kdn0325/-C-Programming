#include <stdio.h>

int main(void)
{
    char o;
    int x,y;
    while (1)
    {
        printf("수식을 입력하세요 : ");
        scanf("%d %c %d",&x,&o,&y);
        if(o=='+')
        {
            printf("%d %c %d = %d\n",x,o,y,x+y);
        }
        else if(o=='-')
        {
            printf("%d %c %d = %d\n",x,o,y,x-y);
        } 
        else if(o=='*')
        {
            printf("%d %c %d = %d\n",x,o,y,x*y);
        }
        else if(o=='%')
        {
            printf("%d %c %d = %d\n",x,o,y,x%y);
        }else
        {
            printf("입력이 잘못되었습니다. \n");
        }
        // 버퍼 처리를 안하면 엔터도 입력이기 때문에 종료 문구가 뜬다
        
        getchar(); // getchar로 버퍼처리
        printf("프로그램을 종료하시겠습니까? ? (y/n)");
        scanf("%c",&o);
        if(o=='n' || o == 'N')
        {
            continue;
        }
        else if(o=='y' || o=='Y')
        {
            break;
        }
    }
    return 0;
    
}