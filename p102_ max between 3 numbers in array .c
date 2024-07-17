#include <stdio.h>
int main()
{
    int a[]={2,3,4};
    if(a[0]>a[1]){
        printf("\n%d is maximum",a[0]);
    }
    else if(a[1]>a[2])
    {
        printf("\n%d is maximum",a[1]);
    }
    else
    {
        printf("\n%d is maximum",a[2]);
    }
}