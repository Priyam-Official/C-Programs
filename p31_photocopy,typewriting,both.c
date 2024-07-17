#include<stdio.h>
int main()
{
    int number,pages1,pages2,a1photocopy,a2photocopy,a1typewriting,a2typewriting,b1,b2,b3,total;
    printf("\n Enter number=");
    scanf("%d",&number);
    b1=0;
    b2=0;
    b3=0;
    

    switch(number)
    {
     case 1:
    printf("\n Enter pages1 for photocopy=");
    scanf("%d",&pages1);
     if(pages1>50)
     {
       a1photocopy=5;
       b1=a1photocopy*pages1;
        printf("the total amount to be paid is%d",b1);
     }
     else
     {
        a2photocopy=7;
        b1=a2photocopy*pages1;
        printf("the total amount to be paid is%d",a2photocopy*pages1);
     }
    
     break;

     case 2:
     printf("\n Enter pages2 for typewriting=");
    scanf("%d",&pages2);
     if(pages2>50)
     {
       a1typewriting=20;
       b2=a2photocopy*pages1;
       printf("the total amount to be paid is%d",b2);
     }
     else
     {
        a2typewriting=25;
        b2=a2typewriting*pages2;
        printf("the total amount to be paid is%d",a2typewriting*pages2);
     }
   
     break;
  
    case 3:
    
    b1=0;
    b2=0;
    b3=0;
    
    printf("\n Enter pages1=");
    scanf("%d",&pages1);
    printf("\n Enter pages2=");
    scanf("%d",&pages2);

    if(pages1>50)
    {
    a1photocopy=5;
    b1=a1photocopy*pages1;
    printf("\n the total amount for either photocopy  is %d",b1);
    }
    else
    {
       a2photocopy=7;
       b1=a2photocopy*pages1;
   printf("\n the total amount for either photocopy is is %d",b1);
    }
    
    if(pages2>50)
    {
    a1typewriting=20;
    b2=a1typewriting*pages2;
     printf("\n the total amount for either typewriting is %d",b2);
    }
    else
    {
      a2typewriting=25;
      b2=a2typewriting*pages2;  
      printf("\n the total amount for either typewriting is is %d",b2);
    }
    b3=b1+b2;
    printf("\n the total bill for photocopy and typewriting%d",b3);

    
break;
default:
break;
}
}
