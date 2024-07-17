#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter number");
    scanf("%d",&number);


    switch(number)
    {
        case 1:
            printf("\nJan");
            break;
        case 2:
             printf("\nFeb");
        case 3:
        printf("\n March");
        case 4:
        printf("\nApril");
        case 5:
        printf("\nMay");
        case 6:
        printf("\nJune");
        case 7:
        printf("\nJuly");
        case 8:
        printf("\nAugust");
        case 9:
        printf("\nSept");
        case 10:
        printf("\nOct");
        case 11:
        printf("\nNov");
        case 12:
        printf("\nDec");
        
        
        default:
            printf("\nWrong month no");
    }


     return 0;
}
