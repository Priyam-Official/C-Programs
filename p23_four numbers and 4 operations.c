#include<stdio.h>
int main()
{
    int option,addition,subtraction,multiplication,division,n1,n2;

    printf("\n The selected options is = ");
    scan("%d",&option);

    if(option==1)
    {
      printf("\n n1=");
      scanf("%f",&n1);
      printf("\n n2=");
      scanf("%f",&n2);

      addition=n1+n2;

      printf("The sum of numbers is %d",addition);

    }

    else if(option==2)
    {
        printf("\ n1=");
        scanf("%f",n1);
        printf("\n n2=");
      scanf("%f",&n2);

      subtraction=n1-n2;
      printf("the difference of numbers is%d",subtraction);

    }
    else if(option==3)
    {
        printf("\ n1=");
        scanf("%f",n1);
        printf("\n n2=");
      scanf("%f",&n2);

     multiplication=n1*n2;
      printf("the product of numbers is%d",multiplication);

    }
    else if(option==4)
    {
        printf("\ n1=");
        scanf("%f",n1);
        printf("\n n2=");
      scanf("%f",&n2);

      division=n1/n2;
      printf("the division of numbers is%d",division);

    }
    return 0;

}