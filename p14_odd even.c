#include<stdio.h>
int main()
{
    int number;

    printf("\nEnter number");
    scanf("%d",&number);
 
if(number%2==0)
{
    printf("the given number is even");
}
else
{
    printf("the given number is odd");
}
return 0;
}