#include<stdio.h>
struct books
{
    int bno;
    char bname[20];
    int price;
};
int main()
{
    struct books b[100];
    int i,n;
    printf("\nEnter number=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\nEnter bno=");
    scanf("%d",&b[i].bno);
    fflush(stdin);
    printf("\nEnter bname=");
    gets(b[i].bname);
    fflush(stdin);
    printf("\nEnter price=");
    scanf("%d",&b[i].price);
    }
    for(i=0;i<n;i++){
         printf("\n%d\t%s\t%d",b[i].bno,b[i].bname,b[i].price);
    }
}