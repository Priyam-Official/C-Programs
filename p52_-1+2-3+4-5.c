#include<stdio.h>
int main()
{
     int i,n,sum=0;
    printf("\n enter number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
        printf("%d -",i);
        sum=sum+i;
        }
        else
        {
            printf("%d +",i);
            sum=sum-i;
        }
       
    }
    printf("the sum is %d",sum);
}