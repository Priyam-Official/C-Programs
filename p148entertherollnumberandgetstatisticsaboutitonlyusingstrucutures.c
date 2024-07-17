#include<stdio.h>


struct stu {
    int sno;
    char sname[20];
    int markshindi, marksenglish;
};

int main() {
    struct stu s[100];
    int i, n, rollno, found = 0;

    printf("\nEnter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter sno: ");
        scanf("%d", &s[i].sno);
        fflush(stdin);
        printf("\nEnter sname: ");
        gets(s[i].sname);
        
        fflush(stdin);
        printf("\nEnter marks of hindi: ");
        scanf("%d", &s[i].markshindi);
        printf("\nEnter marks of english: ");
        scanf("%d", &s[i].marksenglish);
    }

    printf("\nEnter roll number : ");
    scanf("%d", &rollno);

    for(i = 0; i < n; i++) {
        if(s[i].sno == rollno) {
            found = 1;
            printf("\nDetails of student with roll number %d:", rollno);
            printf("\n%d\t%s\t%d\t%d", s[i].sno, s[i].sname, s[i].markshindi, s[i].marksenglish);
            break;
        }
    }

    if (!found) {
        printf("\nStudent with roll number %d not found.", rollno);
    }

    return 0;
}