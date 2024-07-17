#include <stdio.h>

int main() {
    int rows;
    printf("\nEnter number of rows = ");
    scanf("%d", &rows);
    char ch = 'a';

    for(int i = 0; i < rows; i++) {
       
        for(int k = 0; k < i; k++) {
            printf(" ");
        }
        
        for(int j = 0; j < rows - i; j++) {
            printf("%c", ch + i);
        }
        printf("\n");
    }

    return 0;
}