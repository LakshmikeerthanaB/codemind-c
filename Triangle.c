 #include<stdio.h>
 int mainl(int a,int b,int c)
 {
    if(a==b && b==a && c==a)
    {
      return 1;
    }
    else if(a==b || a==c || b==c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
 }
 int main()
 {
      int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int res=mainl(a,b,c);
 if(res==1)
 {
       printf("Equilateral triangle");
 }
 else if(res==2)
 {
       printf("Isosceles triangle");
 }
 else if(res==3)
 {
       printf("Scalene triangle");
 }
 }