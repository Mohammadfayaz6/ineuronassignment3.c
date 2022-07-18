//Q)6.write a program to print greater b/w two numbers print one number
//of both are the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two  numbers\n");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    if(a>b)
    {
        printf("the greater number %d", a);
    }
   if(b>a)
   {
    printf("the greater number %d",b);
   }
   if(a==b);
   {
    printf("both are same %d,%d ",a,b);
   }
     
      return 0;
}