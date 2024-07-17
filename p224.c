#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter value of a=");
    scanf("%d",&a);
      printf("\n Enter value of b=");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n The new values of a=%d and b=%d",a,b);
}