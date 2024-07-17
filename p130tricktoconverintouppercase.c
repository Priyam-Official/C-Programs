#include<stdio.h>
int main()
{
    char name[200];
    printf("\n Enter name=");
    gets(name);
    printf("\n Name=%s",strupr(name));
}