//Q)1.write a program to check whether a given number is positive 
//or non positive.
#include<stdio.h>
int main()
    {
        int num;
        printf("enter an integer number");
        scanf("%d",&num);
        if(num>0)
        {
            printf("positive number");
        }
        else
        {
           printf("non positive");
        }
        return 0;
    }
