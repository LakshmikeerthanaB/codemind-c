#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d",&n);
    if(n>4)
    {
        if(n%4==0)
        {
            x=n/4;
        }
        else
        {
            x=(n/4)+1;

        }
        printf("%d",x);
    }
    else
    {
        printf("1");
    }
}