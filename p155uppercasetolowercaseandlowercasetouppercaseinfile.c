#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1;
    char ch;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    if (f1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = getc(f1)) != EOF) {
        if (isupper(ch)) {
            ch = tolower(ch);
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
        printf("%c", ch);
    }

    fclose(f1);
    return 0;
}