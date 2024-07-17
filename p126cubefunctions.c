#include<stdio.h>
void cube(int a)
{

printf("\n CUBE =%d",a*a*a);
}
int main()
{
    int a;
    printf("\n a=");
    scanf("%d",&a);
  
    cube(a);
    return 0;
}