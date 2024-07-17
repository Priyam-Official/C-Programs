#include<stdio.h>
int main()
{
    int i,count=0,sum=0;
    for(i=1;i<=21;i++){
        
        if(i%7==0){
            printf("\n%d",i);
                sum=sum+i;
            count++;
        }
    }
    printf("\ncount=%d  ",count);
}