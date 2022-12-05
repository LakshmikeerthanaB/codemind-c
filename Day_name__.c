#include<stdio.h>
int mainl(int a)
{
    if(a==1)
    {
         return 1;
    }
    else if(a==2)
    {
       return 2;
    }
    else if(a==3)
    {
        return 3;
    }
    else if(a==4)
    {
       return 4;
    }
    else if(a==5)
    {
         return 5;
    }
    else if(a==6)
    {
        return 6;
    }
    else if(a==7)
    {
          return 7;
    }
    else 
    {
        return 8;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int res=mainl(a);
    if(res==1)
    {
         printf("monday");
    }
    else if(res==2)
    {
        printf("tuesday");
    }
    else if(res==3)
    {
         printf("wednesday");
    }
    else if(res==4)
    {
         printf("thursday");
    }
    else if(res==5)
    {
         printf("friday");
    }
    else if(res==6)
    {
         printf("saturday");
    }
    else if(res==7)
    {
         printf("sunday");
    }
    else if(res==8)
    {
         printf("invalid input");
    }
}