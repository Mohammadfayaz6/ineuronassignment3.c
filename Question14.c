//Q)14.write a program to check whether a given number is div by 7 or  div 3.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    
       printf("the number is divisible by 7 or 3");  
    
       else
       
         printf("the number is not divisible 7 or 3");
       
    
    
    return 0;
    
}