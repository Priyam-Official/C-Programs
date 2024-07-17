#include<stdio.h>
int main()
{
    FILE*f1;
    char ch;
    f1=fopen("d:\\fileofc\\pqr.txt","r");
    while(ch!=EOF)
    {
        ch=getc(f1);
        printf("%c",ch);

    }
    fclose(f1);
}