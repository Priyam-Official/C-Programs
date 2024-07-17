#include<stdio.h>
int main()
{
    int number,n1,n2,n3;
     printf("\n enter number=");
    scanf("%d",&number);

    printf("\n Enter number 1=");
    scanf("%d",&n1);

    
    printf("\n Enter number 2=");
    scanf("%d",&n2);


    printf("\n Enter number3=");
    scanf("%d",&n3);

    switch(number)
    {
        case 1:
        if (n1>n2)
        {
            printf("\n number 1 is greatest");
        }
        else
        {
            printf("\n number 2 is greatest");
        }
        break;

        case 2:
        if(n1>n2 && n1>n3)
        {
            printf("\n number 1 is greatest");
        }
        else if(n2>n3 && n2>n1)
        {
            printf("\n number 2 is greatest");

        }
        else if(n3>n1&&n3>n2)
        {
            printf("\n number 3 is greatest");
        }
        break;
        default:
        break;
        
    }



}