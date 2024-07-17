#include<stdio.h>

int main() {
    FILE *f1, *f2;
    char ch, prev = '\0';
    f1 = fopen("d:\\fileofc\\pqr.txt", "r");
    f2 = fopen("d:\\fileofc\\qwe.txt", "w");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    while ((ch = getc(f1)) != EOF) {
        if (ch == ' ' && prev == ' ') {
            continue;  
        }
        putc(ch, f2);
        prev = ch;
    }
    
    fclose(f1);
    fclose(f2);
    
    printf("\nCopied and removed extra spaces");
    return 0;
}