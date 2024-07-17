#include<stdio.h>
int main()
{
    int number1,number2;

    printf("\n Enter number 1=");
    scanf("%d",&number1);

    printf("\n Enter number 2=");
    scanf("%d",&number2);

    if(number1%number2==0)
    {
      printf("the number 1 is divisible by number 2");
    }
    else
    {
        printf("the number 1 is not divisible by number 2");
    }
    return 0;
}