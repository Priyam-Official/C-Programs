#include<stdio.h>
void max2(int a,int b)
{
    if(a>b){
    printf("\n%d is greater than %d",a,b);
    }
    else{
 printf("\n%d is greater than %d",b,a);
    }
}
int main()
{
    int a,b;
    printf("\n a=");
    scanf("%d",&a);
    printf("\n b=");
    scanf("%d",&b);
  
    max2(a,b);
    return 0;
}