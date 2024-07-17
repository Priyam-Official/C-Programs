#include<stdio.h>
void sum(int arr[])
{
    int i,s=0;
    for(i=0;i<5;i++){
       s=s+arr[i];
    }
     printf("\n Array sum = %d",s);
}
int main()
{
    int arr[]={1,2,3,4,5};
    sum(arr);
}