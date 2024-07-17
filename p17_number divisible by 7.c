#include<stdio.h>
int main()
{
    int number;

    printf("\n Enter the number =");
    scanf("%d",&number);

    if(number/10-2 * (number - number/10 * 10))
    {
        printf("the number is divisible by 7");
    }
    else
    {
        printf("number is not divisible by 7");
    }
    return 0;
}