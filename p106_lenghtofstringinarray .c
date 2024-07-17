#include <stdio.h>
#include <string.h>
main()
{
    char name[200];
    int y;
    printf("\n Enter Name=>");
    gets("%s",&name);
    printf("\n Name=%s",name);
    y=strlen(name);
    printf("\n%d",y);
}