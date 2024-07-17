#include<stdio.h>
void swap(int *x,int *y );
int main()
{
    int a,b;
    printf("\n Enter value of a=");
    scanf("%d",&a);
      printf("\n Enter value of b=");
    scanf("%d",&b);
    swap(&a,&b);
       printf("\n The new value of a=%dand b=%d",a,b);
}
void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
 
}
