#include<stdio.h>
int main()
{
    int option,number1,number2; 
do
{

    printf("\n Enter option=");
    scanf("%d",&option);

        if(option==1)
    {
     
        printf("\n Enter number 1=");
        scanf("%d",&number1);
        printf("\n Enter number 2=");
        scanf("%d",&number2);
       
       printf("the addition of number 1 and number 2 is %d",number1+number2);
    }
    else if(option==2)
    {
        
        printf("\n enter number 1=");
        scanf("%d",&number1);
         printf("\n enter number 2=");
        scanf("%d",&number2);
       
        printf("the difference of number1 and number 2 is%d",number1-number2);
    }
    else if(option==3)
    {
         printf("\n enter number 1=");
        scanf("%d",&number1);
         printf("\n enter number 2=");
        scanf("%d",&number2);
       
        printf("the product of number1 and number 2 is%d",number1*number2);
    }
     else if(option==4)
    {
      printf("\n enter number 1=");
        scanf("%d",&number1);
         printf("\n enter number 2=");
        scanf("%d",&number2);
       
        printf("the division of number1 and number 2 is%d",number1/number2);
         }
         else
         {
             printf("\n Bye");
         }
    }while(option!=5);
     return 0;
    }
