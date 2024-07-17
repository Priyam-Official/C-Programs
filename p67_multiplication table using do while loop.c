#include<stdio.h>
int main()
{
    int number,i;
    printf("\n Enter number=");
    scanf("%d",&number);
    i=1;
    do{
         printf("%dX%d=%d\n",number,i,number*i);
          i++;
    }
    while(i<=10);
}