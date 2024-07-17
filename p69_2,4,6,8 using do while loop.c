#include<stdio.h>
int main()
{
    int i;
    i=1;
    do{
       if(i%2==0){
            printf("\n%d",i);
        } 
        i++;
    }
    while(i<=8);
   
}