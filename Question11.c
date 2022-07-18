//Q)11.write a program to take marks of 5 subjects from the user.assume 
//marks are given out of 100 and passing marks is 33 now display whether the candidate
//is passed or failed.
#include<stdio.h>
int main()
{ 
    int eng,math,phy,bio,chem;
    printf("emter marks of subjects\n",eng,math,phy,bio,chem);
    scanf("%d%d%d%d%d",&eng,&math,&phy,&bio,&chem);
    printf("eng=%d\n math=%d\n phy=%d\n bio=%d\n chem=%d\n",eng,math,phy,bio,chem);
    if(eng>33 && math>33 && phy>33 && bio>33 && chem>33)
    {
        printf("candidate passed");
    } 
    else
    {
       printf("candidate failed");
    }
    return 0;
}