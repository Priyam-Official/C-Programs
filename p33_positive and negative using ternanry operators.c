#include<stdio.h>
int main()
{
    int number,positiveandnegative;
    printf("\n enter number=");
    scanf("%d",&number);

    positiveandnegative=(number>0)?printf("the given number is positive"):printf("the given number is negative");
    return 0;
}