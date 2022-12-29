#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b,k=-1,l=1;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k);
            printf("%d ",a);
            k++;
        }
        else
        {
            b=pow(2,l);
            printf("%d ",b);
            l++;
        }
    }
}