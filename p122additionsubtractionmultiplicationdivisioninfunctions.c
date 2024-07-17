#include<stdio.h>
void add(int a,int b)
{
    printf("\n ADD=%d",a+b);
}
void sub(int a,int b)
{
    printf("\n SUB=%d",a-b);
}
void product(int a,int b)
{
    printf("\n PRODUCT=%d",a*b);
}
void division(int a,int b)
{
    printf("\n DIVISION=%d",a/b);
}
int main()
{
    int a,b;
    printf("\n Enter value of a=");
    scanf("%d",&a);
     printf("\n Enter value of b=");
    scanf("%d",&b);
    
    add(a,b);
    sub(a,b);
    product(a,b);
    division(a,b);
    return 0;
}
//add()5 argumtns
//max2) , add()
//cube)) , square
