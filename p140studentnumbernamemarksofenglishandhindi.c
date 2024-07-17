#include<stdio.h>
struct stu
{
    int sno;
    char sname[20];
    int markshindi,marksenglish;
};
main()
{
    struct stu s1,s2,s3;
    printf("\nEnter sno=");
    scanf("%d",&s1.sno);
    fflush(stdin);
    printf("\nEnter sname=");
    scanf("%s",&s1.sname);
    fflush(stdin);
    printf("\nEnter marks of hindi=");
    scanf("%d",&s1.markshindi);
    printf("\nEnter marks of english=");
    scanf("%d",&s1.marksenglish);


      printf("\nEnter sno=");
    scanf("%d",&s2.sno);
    fflush(stdin);
    printf("\nEnter sname=");
    scanf("%s",&s2.sname);
    fflush(stdin);
      printf("\nEnter marks of hindi=");
    scanf("%d",&s2.markshindi);
    printf("\nEnter marks of english=");
    scanf("%d",&s2.marksenglish);

      printf("\nEnter sno=");
    scanf("%d",&s3.sno);
    fflush(stdin);
    printf("\nEnter sname=");
    scanf("%s",&s3.sname);
    fflush(stdin);
     printf("\nEnter marks of hindi=");
    scanf("%d",&s3.markshindi);
    printf("\nEnter marks of english=");
    scanf("%d",&s3.marksenglish);
    printf("\nsno\tsname\tmarkshindi\tmarksenglish");
    printf("\n%d\t%s\t%d\t%d",s1.sno,s1.sname,s1.markshindi,s1.marksenglish);
    printf("\n%d\t%s\t%d\t%d",s2.sno,s2.sname,s2.markshindi,s2.marksenglish);
    printf("\n%d\t%s\t%d\t%d",s3.sno,s3.sname,s3.markshindi,s3.marksenglish);
}