#include<stdio.h>
int main()
{
    int no,i;
    int y,x=0;
    int z;
    unsigned long long factorial=1;
    printf("\nenter number=");
    scanf("%d",&no);
    z=no;
    while(no>0)
    {
        y=no%10;
        factorial=1;
        for(i=1;i<=y;i++);
        {
            factorial=factorial*i;
        }

        x=x+factorial;
        no=no/10;
    }


if(x==z)
{
    printf("\nthe number is krishnamurthy");
}
else
{
    printf("\nthe number is not krishnamurthy");
}
}