//Q)16.write a program to check whether a given character is an alphabet
//(uppercase) an alphabet (lowercase),a digit or a special character.
#include<stdio.h>
int main()
{    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
       printf("lowercase alphabet");
    else
       if(ch>='A' && ch<='Z')
       printf("uppercase alphabet");
    else
       if(ch>='0' && ch<='9')
        printf(" digit");
    else
        printf("special charcter");
    return 0;
}