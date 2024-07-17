#include <stdio.h>
#include <string.h>
 int main()
{
    char name[200];
    char ch;
    int i;
    printf("\n Enter Name=>");
    gets(name);
   
    for(i=0;i<strlen(name);i++){
        ch=name[i];
        if(ch!=' ')
        {
         printf("%c",ch);
        }
        else if(ch==' '){
            printf("%d",7);
        }
     
    }
 
}