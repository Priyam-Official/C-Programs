#include<stdio.h>
struct book
{
    int bno;
    char bname[20];
    int price;
};
main()
{
    struct book b1,b2,b3;
    printf("\nEnter bno=");
    scanf("%d",&b1.bno);
    fflush(stdin);
    printf("\nEnter bname=");
    scanf("%s",&b1.bname);
    fflush(stdin);
    printf("\nEnter price=");
    scanf("%d",&b1.price);

      printf("\nEnter bno=");
    scanf("%d",&b2.bno);
    fflush(stdin);
    printf("\nEnter bname=");
    scanf("%s",&b2.bname);
    fflush(stdin);
    printf("\nEnter price=");
    scanf("%d",&b2.price);

      printf("\nEnter bno=");
    scanf("%d",&b3.bno);
    fflush(stdin);
    printf("\nEnter bname=");
    scanf("%s",&b3.bname);
    fflush(stdin);
    printf("\nEnter price=");
    scanf("%d",&b3.price);

  printf("\n%d\t%s\t%d", b1.bno, b1.bname, b1.price);
    if (b1.price > 100)
    {
        printf("\tcostly");
    }
    
   
    printf("\n%d\t%s\t%d", b2.bno, b2.bname, b2.price);
    if (b2.price > 100)
    {
        printf("\tcostly");
    }
    
    
    printf("\n%d\t%s\t%d", b3.bno, b3.bname, b3.price);
    if (b3.price > 100)
    {
        printf("\tcostly");
    }
    
    return 0;
}
