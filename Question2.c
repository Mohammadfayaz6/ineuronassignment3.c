//Q)2.write a program to check whether a given number is div by 5 or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("given number is divisible by 5");
    }
    else
    {
        printf("given number is not divisible by 5");
    }
    return 0;
}