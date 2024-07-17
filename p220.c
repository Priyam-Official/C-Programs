#include<stdio.h>
int main()
{
    int a=20;
    int *b;
    b=&a;
    printf("\n %d %d",&a,&b);
    printf("\n %d %d",a,*b);
}