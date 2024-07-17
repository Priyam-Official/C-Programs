#include<stdio.h>
 int main()
 {
    int a[]={11,5,7,90,22,55},b[6],i,count=0,c[6];
     for(i=0;i<6;i++){
      if(a[i]%2==0){
      b[count]=a[i];
      count++;
      }
     }
     printf("\n Array B is =");
      for (int i = 0; i <count ; i++) {
        printf("%d ", b[i]);
      }
      
     for(i=0;i<6;i++){
      if(a[i]%2!=0){
        c[count]=a[i];
        count++;
      }
     }
        printf("\n Array C is =");
      for (int i = 0; i <count ; i++) {
        printf("%d ", c[i]);
      }
     
      printf("\n");
      return 0;
 }