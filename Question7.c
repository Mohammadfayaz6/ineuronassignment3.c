//Q)7.write a program to check whether a roots of a quadratic equation are real 
//distinct,real or imaginary roots.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    int disriminant;
    disriminant=b*b-4*a*c;
     if(disriminant > 0)
     {
        printf("real & distinct");
     }
     else
     if(disriminant < 0)
     {
        printf("imaginary");
     }
     else
     {
        printf("real & equal");
     }
    return 0;
}