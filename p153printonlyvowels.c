#include<stdio.h>
int main()
{
    FILE*f1;
    char ch;
    int c=0;
    f1=fopen("d:\\fileofc\\pqr.txt","r");
    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            c++;
        }
    }
    fclose(f1);
    printf("\nVowels=%d",c);
}