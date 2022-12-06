#include<stdio.h>
int main()
{
    int x,y,tm;
    scanf("%d%d",&x,&y);
    tm=(x*1)+(y*2);
    if(tm%2==0)
    {
        if(x==0 && y%2!=0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else 
    {
        printf("NO");
    }
    
}