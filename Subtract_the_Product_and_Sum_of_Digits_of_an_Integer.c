#include<stdio.h>
int main()
{
    int i,n=0,m=0,j=1;
    scanf("%d",&i);
    while(i!=0)
    {
        m=i%10;
        n=n+m;
        j=j*m;
        i/=10;
    }
    printf("%d",j-n);
    
}