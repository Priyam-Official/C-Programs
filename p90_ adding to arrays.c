#include<stdio.h>
 int main()
 {
    int a[]={11,22,33},b[]={10,20,30},n=3,i,sum;
    for(i=0;i<n;i++){
     sum=a[i]+b[i];
      printf("\nthe sum of %d +%d = %d",a[i],b[i],sum);
    }
 }