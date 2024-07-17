#include<stdio.h>
int main()
{
    int number1; 
    char option;
do
{

    printf("\n Enter option=");
    fflush(stdin); //otherwise it will repeat
    scanf("%c",&option);

        if(option==1)
    {
        printf("\n Enter number 1=");
        scanf("%d",&number1); 
      printf("the square of number 1 is %d",number1*number1);
    }
    else if(option==2)
    {
        
        printf("\n enter number 1=");
        scanf("%d",&number1);
        printf("the cube of number 1 is%d",number1*number1*number1);
    }
        else
         {
             printf("\n Bye");
         }
    }while(option!=3);
     return 0;
    }