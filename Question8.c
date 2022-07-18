//Q)8.write a program to check whether a given year is leap or not. 
#include<stdio.h>
int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("leap year");
        }
        else
        {
            printf("not leap year");
    }   }
    else
    {
        if(year%4==0)
        {
            printf("leap year");
        }
        else
        {
            printf("not leap year");
        }
    }
        
    
    return 0;

}