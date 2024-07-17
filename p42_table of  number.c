#include<stdio.h>
int main()
{
    int number,i;
    printf("\n Enter number=");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
    printf("%dX%d=%d\n",number,i,number*i);
    }
}