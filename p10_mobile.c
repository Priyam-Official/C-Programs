#include<stdio.h>
int main()
{
int priceofmobile;

printf("\n Enter price of mobile phone");
scanf("%d",&priceofmobile);

if(priceofmobile>20000)
{
    printf("sorry i cants buy it");
}
else
{
    printf("i can buy it");
}
return 0;
}