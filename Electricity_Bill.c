#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double c,sc,b,tb;
    if(n<200)
    {
        c=1.20;
    }
    else if(n>=200 && n<400)
    {
        c=1.40;
    }
    else if(n>=400 && n<600)
    {
        c=1.60;
    }
    else if(n>=600 && n<800)
    {
        c=1.80;
    }
    else if(n>=800)
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        sc=b*0.15;
    }
    tb=b+sc;
    printf("Units Consumed: %d
Cost per Unit: %0.2lf
Bill: %0.2lf
Surcharge: %0.2lf
Total Amount: %0.2lf",n,c,b,sc,tb);
}
