//Q)4.write a program to check whether a given number is an even or an odd
//without using modulus operator. 
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x/2*2==x)
       {
        printf("given number is  an even");
       }
    else
       {
        printf("given number is an odd");
       }
    return 0;
}