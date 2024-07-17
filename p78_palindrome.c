#include<stdio.h>
int main()
{
    int no;
    int y,x=0;
    int z;
    printf("\nenter number=");
    scanf("%d",&no);
    z=no;
    while(no>0)
    {
        y=no%10;
        x=x*10+y;
        no=no/10;
    }
    printf("\n reversed number =%d",x);

if(x==z)
{
    printf("\nthe number is palindrome");
}
else
{
    printf("\nthe number is not palindrome");
}
}