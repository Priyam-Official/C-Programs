#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    if (f1 == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    f2 = fopen("d:\\fileofc\\uvw.txt", "w");
    if (f2 == NULL) {
        printf("Error opening destination file.\n");
        fclose(f1);
        return 1;
    }

    while ((ch = getc(f1)) != EOF) {
        if (islower(ch)) { 
            putc(ch, f2);
        }
    }

    fclose(f1);
    fclose(f2);

    printf("\nCopied only lowercase characters\n");

    return 0;
}