#include<stdio.h>
int main()
{
    int i,square,cube;
    i=1;
    do{
        square=i*i;
        cube=i*i*i;
        printf("\n%d-%d-%d",i,square,cube);
        i++;
    }
    
    while(i<=2);
 
}