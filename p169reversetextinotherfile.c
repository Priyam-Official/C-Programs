#include <stdio.h>

int main() {
    FILE *f1,*f2;
    long filesize,i;
    char ch;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");

    f2 = fopen("d:\\fileofc\\qwe.txt", "w");

    fseek(f1, 0, SEEK_END);
    filesize = ftell(f1);

 
    for (i = filesize - 1; i >= 0; i--) {
        fseek(f1, i, SEEK_SET);
        ch = fgetc(f1);
        fputc(ch, f2);
    }

    printf("\nCopied and reversed");

   
    fclose(f1);
    fclose(f2);

    return 0;
}