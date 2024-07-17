#include<stdio.h>
int main()
{
    int i,square,cube;
    square=1;
    cube=1;
    for(i=1;i<=3;i++){
        square=i*i;
        cube=i*i*i;
        printf("\n%d%d%d",i,square,cube);
    }
}