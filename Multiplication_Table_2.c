#include<stdio.h>
int main()
{
    int i,n,m,v;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        v=i*n;
        printf("%d x %d = %d
",n,i,v);
    }
}