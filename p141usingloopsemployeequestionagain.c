#include<stdio.h>
struct emp
{
    int eno;
    char ename[20];
    int sal;
};
int main()
{
    struct emp e[100];
    int i,n;
    printf("\nEnter number=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\nEnter eno=");
    scanf("%d",&e[i].eno);
    fflush(stdin);
    printf("\nEnter ename=");
    gets(e[i].ename);
    fflush(stdin);
    printf("\nEnter salary=");
    scanf("%d",&e[i].sal);
    }
    for(i=0;i<n;i++){
         printf("\n%d\t%s\t%d",e[i].eno,e[i].ename,e[i].sal);
    }
}