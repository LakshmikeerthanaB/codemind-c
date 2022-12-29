#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>=50)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}