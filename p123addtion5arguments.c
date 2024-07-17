#include<stdio.h>
void add(int a,int b,int c,int d,int e)
{
    printf("\n ADDITION =%d",a+b+c+d+e);
}
int main()
{
    int a,b,c,d,e;
    printf("\n a=");
    scanf("%d",&a);
    printf("\n b=");
    scanf("%d",&b);
    printf("\n c=");
    scanf("%d",&c);
    printf("\n d=");
    scanf("%d",&d);
    printf("\n e=");
    scanf("%d",&e);

    add(a,b,c,d,e);
    return 0;
}