#include<stdio.h>
int mainl(int a,int b,int c)
{
    if(a>b && a>c)
    {
       return 1;
    }
    else if(b>a && b>c)
    {
       return 2;
    }
    else if(c>a && c>b)
    {
       return 3;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int res=mainl(a,b,c);
    if(res==1)
    {
         printf("%d",a);
    }
    else if(res==2)
    {
         printf("%d",b);
    }
    else if(res==3)
    {
         printf("%d",c);
    }
}