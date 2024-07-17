#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int max2(int a ,int b)
{
    int f;
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b,ans,ans1;
    printf("\n Enter number 1=");
    scanf("%d",&a);
    printf("\nEnter number 2=");
    scanf("%d",&b);
    ans=add(a,b);
    printf("\naddition=%d",ans);
    ans1=max2(a,b);
    printf("\nmax number =%d",ans1);
}