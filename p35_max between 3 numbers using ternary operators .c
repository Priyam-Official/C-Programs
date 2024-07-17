#include<stdio.h>
int main()
{
    int a,b,c,max;
     printf("\n enter number 1=");
    scanf("%d",&a);
     printf("\n enter number 2=");
    scanf("%d",&b);
      printf("\n enter number 3=");
    scanf("%d",&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("the max of 3 is %d",max);
return 0;
    
}