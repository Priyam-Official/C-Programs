
#include<stdio.h>
int main()
{
    int number,n1,n2;
    
    printf("\n enter number=");
    scanf("%d",&number);

    printf("\n Enter number 1=");
    scanf("%d",&n1);

    
    printf("\n Enter number 2=");
    scanf("%d",&n2);

    switch(number)
    {
        case 1:
        printf("the sum of both is%d",n1+n2);
        break;

        case 2:
        printf("the differnce of both is%d",n1-n2);
        break;

        case 3:
        printf("the product of both is%d",n1*n2);
        break;

        case 4:
        printf("the sum of both is%d",n1/n2);
        break;
        default:
        break;

    }
}