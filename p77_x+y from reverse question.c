#include<stdio.h>
int main()
{
    int no;
    int y,x=0;
    printf("\nenter number=");
    scanf("%d",&no);
    while(no>0)
    {
        y=no%10;
        x=x+y;
        no=no/10;
    }
    printf("\n reversed number =%d",x);
}