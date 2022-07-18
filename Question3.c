//Q)3.write a program to check whether a given number is even or an odd.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("given number is even");
    }
    else
    {
        printf("given number is odd ");
    }
    return 0;
}