#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter number=");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
    printf("\n Monday");
    break;
    case 2:
    printf("\n tueday");
    break;
    case 3:
    printf("\n Wednesday");
    break;
    case 4:
    printf("\n thursday");
    break;
    case 5:
    printf("\n friday");
    break;
    case 6:
    printf("\n saturday");
    break;
    case 7:
    printf("\n Sunday");
    break;
    default:
        break;
    }
}