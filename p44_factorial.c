#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long factorial=1;
    printf("\n enter number=");
    scanf("%d",&n);
  
        if(n<0){
        printf("\nwrong input");
        }
        else
        {
              for(i=1;i<=n;i++){
        factorial=factorial*i;
              }
        printf("\n factorial of%d =%llu",n,factorial);
       return 0;
        
    }
}
