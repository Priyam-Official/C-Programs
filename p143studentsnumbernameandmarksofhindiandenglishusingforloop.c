#include<stdio.h>
struct stu
{
    int sno;
    char sname[20];
    int markshindi,marksenglish;
};
int main()
{
    struct stu s[100];
    int i,n;
    printf("\nEnter number=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\nEnter sno=");
    scanf("%d",&s[i].sno);
    fflush(stdin);
    printf("\nEnter sname=");
    gets(s[i].sname);
    fflush(stdin);
    printf("\nEnter marks of hindi=");
    scanf("%d",&s[i].markshindi);
    printf("\nEnter marks of english=");
    scanf("%d",&s[i].marksenglish);

    }
    for(i=0;i<n;i++){
         printf("\n%d\t%s\t%d",s[i].sno,s[i].sname,s[i].markshindi,s[i].marksenglish);
    }
}