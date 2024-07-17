#include<stdio.h>
int main()
{
    int number;

    printf("\n Enter number=");
    scanf("%d",&number);

    if(number=1)
    {
        int number1,square;
        printf("\n Enter number 1=");
        scanf("%d",&number1);
        square=number1*number1;
       printf("the square of number 1 is %d",square);
    }
    else if(number=2)
    {
        int number2,cube;
        printf("\n enter number 2");
        scanf("%d",&number2);
        cube=number2*number2*number2;
        printf("the cube of number 2 is%d",cube);
    }
    return 0;
}