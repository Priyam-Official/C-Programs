#include<stdio.h>
int main()
{
     int i,n,sum=0;
     unsigned long long factorial=1;
    printf("\n enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
        printf("%d! +",i);
        sum=sum+factorial;
        printf(" %llu +",factorial);
    }
    printf("the sum is %d",sum);
}