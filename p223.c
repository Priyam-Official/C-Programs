#include<stdio.h>
int main()
{
    int a[3]={1,2,3},i;
    int *ptr;
    ptr=a;
    for(i=0;i<3;i++){
        printf(" %d",*ptr);
        ptr++;
    }
}