#include<stdio.h>
int main()
{
    int a=20;
    int *b;
    b=&a;
    printf("\n %d %d",a,*b);
    *b=100;
    printf("\n %d %d",a,*b);
    a=50;
    printf("\n %d %d",a,*b);
}