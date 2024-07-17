#include<stdio.h>
int main()
{
    int i,square;
    i=1;
    do{
         square=i*i;
        printf("\n%d-%d",i,square);
        i++;
    }
    while(i<=3);
}