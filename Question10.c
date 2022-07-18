//Q)10.write a program which takes the cost price and selling price of product 
//from the user now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int costprice;
    int sellingprice;
    printf("enter cost price and selling price of product\n");
    scanf("%d%d",&costprice,&sellingprice);
    float profit;
    profit=sellingprice-costprice;
    float profitper=profit*100/costprice;
    printf("profit percentage = %f%%\n",profitper);
    float loss;
    profit=costprice-sellingprice;
    float lossper=loss*100/costprice;
    printf("loss percentage = %f%%\n",lossper);
    if(profitper>lossper)
    {
        printf("profit percentage %f",profitper);
    }
    else
    {
        printf("loss percentage %f",lossper);
    }
    return 0;
}    