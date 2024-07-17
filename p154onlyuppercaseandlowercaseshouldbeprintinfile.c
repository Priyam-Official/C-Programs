#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1;
    char ch;
    int upper_count = 0, lower_count = 0;

    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    if (f1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = getc(f1)) != EOF) {
        if (isupper(ch)) {
            upper_count++;
            
        } else if (islower(ch)) {
            lower_count++;
           
        }
    }

    fclose(f1);
    printf("\nUppercase letters: %d\n", upper_count);
    printf("Lowercase letters: %d\n", lower_count);

    return 0;
}