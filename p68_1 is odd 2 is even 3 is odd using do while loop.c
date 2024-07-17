#include<stdio.h>
int main()
{
    int i,n;
    printf("\n all numbers till ");
    scanf("%d",&n);
    printf("\n  numbers from 0 to %d are \n",n);
     i=1;
     do{
           if(i%2==0){
            printf("\n%d is even",i);
            i++;
     }
     else
        { printf("\n%d is odd",i);
        i++;
        }
     }
     while(i<=n);
}