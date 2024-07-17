#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    // Convert character to lowercase for uniformity
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

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
        if (!isVowel(ch)) { // Check if the character is not a vowel
            putc(ch, f2);
        }
    }

    fclose(f1);
    fclose(f2);

    printf("\nCopied without vowels\n");

    return 0;
}