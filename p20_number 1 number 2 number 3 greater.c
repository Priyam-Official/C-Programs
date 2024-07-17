#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("\n Enter number 1");
    scanf("%d",&number1);

    printf("\n Enter number 2");
    scanf("%d",&number2);

    printf("\n Enter number 3");
    scanf("%d",&number3);

    if(number1>number2&&number3)
    {
     printf("Number 1 is greatest");
    }
    else if (number2>number1&&number3)
    {
      printf("Number 2 is greatest");
    }
    else
    {
        printf("Number 3 is greatest");
    }
    return 0;
    
}