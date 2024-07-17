 #include<stdio.h>
 int main()
 {
    int a[]={11,5,7,90,22,55},b[6],i;
     for(i=0;i<6;i++){
        b[i]=a[i];
     }
     printf("\n Array B is =");
      for (int i = 0; i <6 ; i++) {
        printf("%d ", b[i]);
      }
      printf("\n");
      return 0;
 }