#include<stdio.h>
float bill(int n)
{
    float c,sc,b,tb;
    if(n<200)
    {
        c=1.20;
    }
    else if(n>=200 && n<400)
    {
        c=1.50;
    }
    else if(n>=400 && n<600)
    {
        c=1.80;
    }
    else if(n>600)
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        sc=b*0.15;
    }
    else
    {
        sc=100;
    }
    tb=b+sc;
    printf("%0.2f",tb);
    return tb;
}
int main()
{
    int n;
    scanf("%d",&n);
    bill(n);
}
