#include<stdio.h>
int main()
{
   float p,r,t,SI;
  
    printf("\nEnter principle value =>");
    scanf("%f",&p);

    printf("\nEnter rate =>");
    scanf("%f",&r);
    
    printf("\nEnter principle value =>");
    scanf("%f",&t);
    


   SI=(p*r*t)/100;

   printf(" the simple interst of the above data %.2f",SI);
   return 0;

}