#include<stdio.h>
int main()
{
    int i,n;
    printf("\n enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d+%d",i,n);
    }
}