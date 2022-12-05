#include <stdio.h>
int main()
{
     char ch;
     scanf("%c",&ch);
     if(ch=='r' || ch=='R')
     {
          printf("RED");
     }
     else if(ch=='g' || ch=='G')
     {
          printf("Green");
     }
     else if(ch=='y' || ch=='Y')
     {
          printf("Yellow");
     }
     else
     {
          printf("-1");
     }
     return 0;
}