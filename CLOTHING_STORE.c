#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,b[100],sum=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    a[j]=-1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]!=-1)
            {
                if(a[i]==b[j])
                {
                    c+=1;
                }
            }
        }
        if(c%2==0)
        {
            sum+=c/2;
        }
        if(c%2==1)
        {
            sum+=(c-1)/2;
        }
    }
    printf("%d",sum);
}


