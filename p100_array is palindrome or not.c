#include <stdio.h>
int main()
{
    int a[]={1,2,2,1};
    int y,x=0,i;
    int z;
    z=a[i];
    while(a[i]>0)
      {
        y=a[i]%10;
        x=x*10+y;
        a[i]=a[i]/10;
    }
    if(x==z)
{
    printf("\nthe array is palindrome");
}
else
{
    printf("\nthe array is not palindrome");
}
}
