#include<stdio.h>
int main()
{
    int w,x,y,z,a,b,c;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    a=x+y;
    b=y+z;
    c=x+z;
    if(w==a || w==b || w==c ||w==x || w==y ||w==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}