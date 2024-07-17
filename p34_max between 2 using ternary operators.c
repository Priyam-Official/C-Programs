#include<stdio.h>
int main()
{
    int a,b,max;
     printf("\n enter number 1=");
    scanf("%d",&a);
     printf("\n enter number 2=");
    scanf("%d",&b);

    max=(a>b)?printf("the maximum of both numbers is %d",a):printf("the maximum of both numbers is%d",b);
    return 0;
}