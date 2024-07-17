#include<stdio.h>
int main()
{
    float height,base,radius,option;
    printf("the selected option is=");
    scanf("%f",&option);
    

    if(option==1)
    {
        printf("\nEnter base=");
        scanf("%f",&base);

        printf("\nEnter height=");
        scanf("%f",&height);
        
        

        printf("the area of triangle is %.2f",0.5*(base*height));


    }
    else if(option==2)
    {printf("\nEnter radius=");
        scanf("%f",&radius);

        printf("the area of circle is%.2f",3.14*radius*radius);
}
return 0;
}