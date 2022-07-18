//Q)5.write a program to check whether a given number is a three digit or not. 
#include<stdio.h>
int main()
{
    int x;
    printf("enter a three digit number\n");
    scanf("%d",&x);
    if(x>99)
    {
        printf("the number is in  three digit ");
    }
    else
    {
        printf("the number is not in three digit ");
    }
    return 0;
}