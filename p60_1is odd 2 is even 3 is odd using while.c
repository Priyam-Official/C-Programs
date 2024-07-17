#include<stdio.h>
int main()
{
    int i,n;
    printf("\n all numbers till ");
    scanf("%d",&n);
     printf("\n  numbers from 0 to %d are \n",n);
     i=1;
     while(i<=n){
         if(i%2==0){
            printf("\n%d is even",i);
            i++;
     }
     else
        { printf("\n%d is odd",i);
        i++;
        }

}
}