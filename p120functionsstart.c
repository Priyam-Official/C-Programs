#include<stdio.h>
void add()
{
    int a,b;
    printf("\n Enter value of a=");
    scanf("%d",&a);
     printf("\n Enter value of b=");
    scanf("%d",&b);
    printf("\n ADD=%d",a+b);
}
void max2()
{
    int a,b;
     printf("\n Enter value of a=");
    scanf("%d",&a);
     printf("\n Enter value of b=");
    scanf("%d",&b);
    if(a>b){
        printf("\n%d is greater than %d",a,b);
    }
    else
    {
        printf("\n%d is greater than %d",b,a);
    }
}
void max3()
{
    int a,b,c;
     printf("\n Enter value of a=");
    scanf("%d",&a);
     printf("\n Enter value of b=");
    scanf("%d",&b);
    printf("\n Enter value of c=");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("\n%d is greater than %d and %d",a,b,c);
    }
    else if(b>a&&b>c)
    {
        printf("\n%d is greater than %d and %d",b,a,c);
    }
    else{
        printf("\n%d is greater than %d and %d",c,a,b);
    }
}
void oddeven()
{
    int number;
    printf("\n Enter number=");
    scanf("%d",&number);
    if(number%2==0){
        printf("\n %d is even",number);
    }
    else{
        printf("\n %d is odd",number);
    }
}
void posneg()
{
     int num;
    printf("\n Enter num=");
    scanf("%d",&num);
    if(num>0){
        printf("\n %d is positive",num);
    }
    else{
        printf("\n %d is negative",num);
    }
}
void leapyear()
{
     int year;
    printf("\n Enter number=");
    scanf("%d",&year);
    if(year%4==0){
        printf("\n %d is leapyear",year);
    }
    else{
        printf("\n %d is not leapyear",year);
    }
}
void areatriangle()
{
   float base,height,area;
    printf("\n Enter value of height=");
    scanf("%d",&height);
     printf("\n Enter value of base=");
    scanf("%d",&base);
    area=0.5*base*height;
    printf("\n Area is =%.2f",area);
}
void areacircle()
{
   float radius,area;
    printf("\n Enter value of radius=");
    scanf("%d",&radius);
 
    area=3.14*radius*radius;
    printf("\n Area is =%.2f",area);
}
void table()
{
      int no,i;
    printf("\n Enter number=");
    scanf("%d",&no);
    i=1;
    do{
         printf("%dX%d=%d\n",no,i,no*i);
          i++;
    }
    while(i<=10);
}
void fact()
{
int i,n;
    unsigned long long factorial=1;
    printf("\n enter number=");
    scanf("%d",&n);
  
        if(n<0){
        printf("\nwrong input");
        }
        else
        {
              for(i=1;i<=n;i++){
        factorial=factorial*i;
              }
        printf("\n factorial of%d =%llu",n,factorial);
       
        
    }
}
void palindrome()
{
       int no;
    int y,x=0;
    int z;
    printf("\nenter number=");
    scanf("%d",&no);
    z=no;
    while(no>0)
    {
        y=no%10;
        x=x*10+y;
        no=no/10;
    }
    printf("\n reversed number =%d",x);

if(x==z)
{
    printf("\nthe number is palindrome");
}
else
{
    printf("\nthe number is not palindrome");
}
}
void primeno()
{
      int n,i,count=0;
    printf("\n Enter positive number =");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0)
        count+=1;
    }
    if(n==0||n==1){
     printf("%d is neither prime nor composite",n);
    }
    else if(count>2){
        printf("%d is composite number",n);
    }
    else{
        printf("%d is prime number",n);
    }
   
}
int main()
{
     add();
     max2();
     fact();
     max3();
     table();
     posneg();
     oddeven();
     palindrome();
     fact();
     areatriangle();
     areacircle();
     leapyear();

return 0;
}