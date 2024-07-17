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
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("7");
        } else {
            printf("%c", ch);
        }
    }

    fclose(f1);
    return 0;
}