//Q)17.write a program which takes length of the sides of triangle as an input
//display whether a triangle is valid or not.
#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("Enter side of triangles\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("valid triangle");
    }
    else
    {
       printf("invalid triangle");
    }

    return 0;
}