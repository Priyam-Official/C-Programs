 #include<stdio.h>
 int main()
 {
       int a[]={11,5,20,11,65,3,11,31,6,22,11,72},i,n=11,number,count=0,sum=0;
          printf("\n Enter number =");
          scanf("%d",&number);
       for(i=0;i<n;i++){
         if(a[i]%number==0){
             printf("\n%d It is divisible by %d",a[i],number);
            count++;
      sum=sum+a[i];
         }
     
       
      }
         printf("\n count for number divisible by %d is%d",number,count);
        printf("\nthe sum of numbers divisible by %d is %d",number,sum);
 }