#include<stdio.h>
int main()
{
    FILE*f1,*f2;
    char ch;
    f1=fopen("d:\\fileofc\\pqr.txt","r");
    f2=fopen("d:\\fileofc\\qwe.txt","w");
    while(ch!=EOF)
    {
        ch=getc(f1);
        putc(ch,f2);

    }
    printf("\nCopied");
}