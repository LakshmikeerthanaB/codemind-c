#include<stdio.h>
int main()
{
    int i,n,rev=0,m;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        n/=10;
        rev=rev*10+m;
        
    }
   
         printf("%d",rev);
}