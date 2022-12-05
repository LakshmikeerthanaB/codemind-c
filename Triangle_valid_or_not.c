#include<stdio.h>
int mainl(int a,int b,int c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int res=mainl(a,b,c);
    if(res==1)
    {
        printf("Valid triangle");
    }
    else if(res==0)
    {
        printf("Invalid triangle");
    }
}
