#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {
        char ch = 'a' + rows - 1 - i; 
        for(int j = 0; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
