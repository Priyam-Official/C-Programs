#include<stdio.h>
int main()
{
    int number,n1;
    
    printf("\n Enter number =");
    scanf("%d",&number);

     printf("\n Enter number 1=");
    scanf("%d",&n1);

    
 

    switch(number)
    {
        case 1:
        printf("\n Square of numbers is%d",n1*n1);
        break;

        case 2:
        printf("\n Cube of numbers is %d",n1*n1*n1);
        break;
    
    default:
    break;
    }
}
