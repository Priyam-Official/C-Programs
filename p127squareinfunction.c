#include<stdio.h>
void square(int a)
{

printf("\n SQUARE =%d",a*a);
}
int main()
{
    int a;
    printf("\n a=");
    scanf("%d",&a);
  
    square(a);
    return 0;
}