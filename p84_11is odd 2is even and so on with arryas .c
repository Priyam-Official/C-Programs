#include<stdio.h>
int main()
{
     int a[]={11,5,20,11,65,3,11,31,6,22,11,72},i,n=11,counteven=0,countodd=0,sumodd=0,sumeven=0;
        for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("\n %d is even",a[i]);
            counteven++;
            sumeven=sumeven+a[i];
        }
        else
        {
            printf("\n%d is odd",a[i]);
            countodd++;
            sumodd=sumodd+a[i];
        }
        }
        printf("\n the count for even number is=%d",counteven);
        printf("\n the count for odd number is=%d",countodd);
        printf("\n the sum for even number is=%d",sumeven);
        printf("\n the sum for odd number is=%d",sumodd);
    
}