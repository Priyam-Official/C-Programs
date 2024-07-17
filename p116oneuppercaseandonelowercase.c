
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char ch;
    int i;
    printf("enter the Name=");
    gets(name);
    for(i=0; name[i] != '\0'; i++){
        ch=name[i];
        if(i%2==0){
            printf("%c",toupper(ch));
        }
        else{
            printf("%c",tolower(ch));
        }
    }
}       