 #include<stdio.h>
 int main()
 {
    int a[]={11,-5,20,-11,65,-3,11,-31,6,-22,11,-72},i,n=12,number,count=0;
    printf("\n enter number =");
    scanf("%d",&number);
    for(i=0;i<n;i++){
            if(a[i]==number){
            printf("\n %d is present in array at %d",a[i],i);
              count++;
            }
            
           
        
    }
    if(count==0){
        printf("\n sorry %d is not present in the given array",number);
    }
     printf("\n the count =%d",count);
 }