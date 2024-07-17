#include<stdio.h>
int main()
{
    float usd,inr;
    printf("\nEnter usd =");
    scanf("%f",&usd);

    inr=usd*83.59;

    printf("the value in inr =%.2f",inr);
    return 0;
}