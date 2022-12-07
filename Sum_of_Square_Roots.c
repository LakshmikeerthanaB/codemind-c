#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m;
    float s=0.0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        s=s+pow(i,0.5);
    }
    printf("%0.2f",s);
}