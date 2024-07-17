#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("\n enter number");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        printf("1/%.0f +",i);
        sum=sum+(1/i);
    }
    printf(" the sum is %.2f",sum);
}