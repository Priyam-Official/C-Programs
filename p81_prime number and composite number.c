#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("\n Enter positive number =");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0)
        count+=1;
    }
    if(n==0||n==1){
     printf("%d is neither prime nor composite",n);
    }
    else if(count>2){
        printf("%d is composite number",n);
    }
    else{
        printf("%d is prime number",n);
    }
    return 0;
}

   
   