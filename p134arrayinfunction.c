#include<stdio.h>
void function(int arr[])
{
    int i;
    for(i=0;i<5;i++){
        printf("\n Array element  = %d",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    function(arr);
}