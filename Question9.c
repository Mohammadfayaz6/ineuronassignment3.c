//Q)9.write a program to find the gratest among three  given numbers print
//once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter  three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("x=%d y=%d z=%d\n",x,y,z);
    if(x>y && x>z)
    {
        printf("the greatest number is %d",x);
    }
    else
    {
        if(z>y && z>x)
        {
            printf("the greatest number is %d",z);
        }
        else
        {
            printf("the greatest number is %d",y);
        }

    }
    return 0;
}