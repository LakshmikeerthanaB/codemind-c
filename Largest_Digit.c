#include<stdio.h>
int main()
{
    int a,i,b=0,s=0,max=0;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        if(b>max)
        {
            max=b;
        }
    }
    printf("%d",max);
}
