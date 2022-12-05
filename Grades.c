#include<stdio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    if(avg>=90)
        printf("Grade A");
    else if(avg>=80)
        printf("Grade B");
    else if(avg>=70)
        printf("Grade C");
    else if(avg>=60)
        printf("Grade D");
    else if(avg>=40)
        printf("Grade E");
    else if(avg<41)
        printf("Grade F");
 
}
