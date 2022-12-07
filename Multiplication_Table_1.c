#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        m=i*n;
        printf("%d x %d = %d
",n,i,m);
    }
}