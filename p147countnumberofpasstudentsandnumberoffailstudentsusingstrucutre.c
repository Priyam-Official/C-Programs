#include<stdio.h>


struct stu
{
    int sno;
    char sname[20];
    int markshindi, marksenglish;
};

int main()
{
    struct stu s[100];
    int i, n;
    int pass_count = 0, fail_count = 0;

    printf("\nEnter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter sno: ");
        scanf("%d", &s[i].sno);
        fflush(stdin);

        printf("\nEnter sname: ");
        gets(s[i].sname);
        fflush(stdin);

        printf("\nEnter marks of Hindi: ");
        scanf("%d", &s[i].markshindi);

        printf("\nEnter marks of English: ");
        scanf("%d", &s[i].marksenglish);
    }

    printf("\nS.No\tName\t\tHindi\tEnglish\tStatus");
    for(i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t\t%d\t%d", s[i].sno, s[i].sname, s[i].markshindi, s[i].marksenglish);

        if(s[i].markshindi + s[i].marksenglish > 18)
        {
            printf("\tYou are pass");
            pass_count++;
        }
        else
        {
            printf("\tYou are fail");
            fail_count++;
        }
    }

    printf("\n\nNumber of students passed: %d", pass_count);
    printf("\nNumber of students failed: %d", fail_count);

    return 0;
}