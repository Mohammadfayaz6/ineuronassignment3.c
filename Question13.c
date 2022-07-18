//Q)13.write a program to check whether a given number is div by 3 and div by 2.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0 && x%3==0)
    {
       if(x%2==0 && x%3==0)
       printf("the number is divisible by 2 and 3");  
    
       else
       printf("the number is not divisible 2 and 3");
    }
    else
    {
       if(!x%2==0 && x%3==0)
       printf("the number is divisible by 3 and not divisible by 2");
        
      else
      printf("the number is divisible 2 and not divisible by 3");
    }
    
    return 0;
    
}