#include<stdio.h>
int main()
{
    int i,n,counteven=0,countodd=0,sumeven=0,sumodd=0;
    printf("\n all numbers till ");
    scanf("%d",&n);
    printf("\n  numbers from 0 to %d are \n",n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            printf("\n%d is even",i);
            sumeven+=i;
            counteven++;
        }
        else
        { printf("\n%d is odd",i);
        sumodd=sumodd+i;
        countodd++;
        }
    }
    printf("\n the count for even numbers is %d",counteven);
    printf("\n the count for odd numbers is %d",countodd);
    printf("\n sum of even numbers is %d",sumeven);
    printf("\n the sum of odd numbers is %d",sumodd);
}
    