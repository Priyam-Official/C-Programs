#include<stdio.h>


struct stu {
    int sno;
    char sname[20];
    int markshindi, marksenglish;
};

int main() {
    struct stu s[100];
    int i, n;
    int HighestMarksIndex = 0;
    int HighestTotalMarks = 0;

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

        int totalMarks = s[i].markshindi + s[i].marksenglish;
        if (totalMarks > HighestTotalMarks) {
            HighestTotalMarks = totalMarks;
            HighestMarksIndex = i;
        }
    }

    printf("\nStudent with the highest marks:");
    printf("\n%d\t%s\t%d\t%d", s[HighestMarksIndex].sno, s[HighestMarksIndex].sname, s[HighestMarksIndex].markshindi, s[HighestMarksIndex].marksenglish);

    return 0;
}