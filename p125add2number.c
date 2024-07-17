#include<stdio.h>
void add(int a,int b)
{

printf("\n ADDITION =%d",a+b);
}
int main()
{
    int a,b;
    printf("\n a=");
    scanf("%d",&a);
    printf("\n b=");
    scanf("%d",&b);
  
    add(a,b);
    return 0;
}