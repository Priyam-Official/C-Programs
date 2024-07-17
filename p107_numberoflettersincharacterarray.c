#include <stdio.h>
#include<string.h>
 int main()
{
    char name[200];
    char ch;
    int count=0,i;
    printf("\n Enter Name=>");
    gets(name);
    printf("\n Name=%s",name);
    for(i=0;i<strlen(name);i++){
        ch=name[i];
        if(ch=='k');
        {
             count++;
        }
       
    }
  printf("\n count=%d",count);
}