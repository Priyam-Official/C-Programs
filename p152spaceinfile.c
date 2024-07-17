
#include<stdio.h>
int main()
{
    FILE*f1;
    char ch;
    int c=0;
    printf("hi");

    f1=fopen("d:\\fileofc\\pqr.txt","r");
    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch=' ')
        {
        c++;
        }

    }
    fclose(f1);
    printf("\n Total spaces =%d",c);
   
}