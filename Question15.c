//Q)15.write a program to check whether a given number is positive,negative or zero 
#include<stdio.h>
int main()
{
    int var;
    printf("enter an integer number\n");
    scanf("%d",&var);
     if(var>0)
        printf("positive number");
     
     else
         if(var<0)  
        printf("negative number");
     
     else
        printf("number is zero ");
     
     return 0;

}    
