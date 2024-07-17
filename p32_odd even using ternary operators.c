#include<stdio.h>
int main()
{
    int number,oddeven;
    printf("\n enter number=");
    scanf("%d",&number);

    oddeven =(number%2==0)?printf("the number is even"):printf("the number is odd");
    return 0;
}