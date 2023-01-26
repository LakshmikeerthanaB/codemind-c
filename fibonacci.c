

#include<stdio.h>
int main()
{
    int a,b=0,i,c=1,d,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d ",b);
        d=b+c;
        b=c;
        c=d;
        if(i%d==a)
        {
            k=1;
            break;
        }
    }
}