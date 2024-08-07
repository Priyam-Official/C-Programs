#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    if (f1 == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    f2 = fopen("d:\\fileofc\\qwe.txt", "w");
    if (f2 == NULL) {
        printf("Error opening destination file.\n");
        fclose(f1);
        return 1;
    }

    while ((ch = getc(f1)) != EOF) {
        if (ch == ' ') { 
            putc('7', f2); 
        } else {
            putc(ch, f2); 
        }
    }

    fclose(f1);
    fclose(f2);

    printf("\nCopied with spaces replaced by 7\n");

    return 0;
}