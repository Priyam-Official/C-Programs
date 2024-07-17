#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
       
        for(int k = 1; k < i; k++) {
            printf(" ");
        }
       
        for(j = i; j <= rows; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}