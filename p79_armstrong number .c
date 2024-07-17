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
        x=x+(y*y*y);
        no=no/10;
    }


if(x==z)
{
    printf("\nthe number is armstrong");
}
else
{
    printf("\nthe number is not armstrong");
}
}