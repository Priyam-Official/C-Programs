#include<stdio.h>
int main()
{
    float option,n1,n2,n3;
    printf("\n the selected option is=");
    scanf("%f",&option);

    if (option==1)
    {
       printf("the number n1=");
       scanf("%f",&n1);
       printf("the number n2=");
       scanf("%f",&n2);
       if(n1>n2)
       {
printf("number 1 is greatest");
       }
       else{
printf("number 2 is greatest");
       }

    }
    else if (option==2)
    {
        printf("the number n1=");
       scanf("%f",&n1);
       printf("the number n2=");
       scanf("%f",&n2);
       printf(" the number n3=");
       scanf("%f",&n3);
       if(n1>n2&& n1>n3)
       {
        printf("n1 is greatest");
       }
       else if(n2>n1&& n2>n3)
       {
        printf("number 2 is greatest");
       }
       else {
        printf("number 3 is greatest");
       }
    }
    return 0;
    
}
