//Q)12.write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
       printf("lowercase alphabet");
    else
       printf("uppercase alphabet");
    
    return 0;

}
