#include<stdio.h>
int main()
{
    int number;

    printf("\n Enter the number");
    scanf("%d",&number);

    if(number>0)
    {
        printf("the number is positive");
    }
    else
    {
        printf("the number is negative");
    }
    return 0;
}