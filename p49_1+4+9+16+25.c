#include<stdio.h>
int main()
{
     int i,n,sum=0;
    printf("\n enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d + ",i*i);
        sum=sum+(i*i);
    }
    printf("the sum is %d",sum);
}