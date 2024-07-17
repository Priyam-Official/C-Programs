#include <stdio.h>
int main()
{
    char name[200];
    printf("\n Enter Name=>");
    gets(name);   // gets ma 2 name vache space hoy toh pan print thay which is not in scan
    printf("\n Name=%s",name);
}