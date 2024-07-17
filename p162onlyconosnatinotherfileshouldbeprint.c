#include <stdio.h>
#include <ctype.h>

int isConsonant(char ch) {
    
    ch = tolower(ch);
    
    return (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'));
}

int main() {
    FILE *f1, *f3;
    char ch;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    if (f1 == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    f3 = fopen("d:\\fileofc\\uvw.txt", "w");
    if (f3 == NULL) {
        printf("Error opening destination file.\n");
        fclose(f1);
        return 1;
    }

    while ((ch = getc(f1)) != EOF) {
        if (isConsonant(ch)) { 
            putc(ch, f3);
        }
    }

    fclose(f1);
    fclose(f3);

    printf("\nCopied only consonants\n");

    return 0;
}