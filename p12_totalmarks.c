#include<stdio.h>
int main()
{
    int m1,m2,m3,total;

    printf("\enter m1=");
    scanf("%d",&m1);

    printf("\enter m2=");
    scanf("%d",&m2);

    printf("\enter m3=");
    scanf("%d",&m3);

    total=m1+m2+m3;
if(total>20)
{
    printf("you are pass");
}
else
{
    printf("you are fail");
}
return 0;
}