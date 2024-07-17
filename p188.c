#include <stdio.h>

int main() {
    int rows;
    printf("\nEnter number of rows=");
    scanf("%d",&rows);

    for(int i = 0; i < rows; i++) {
        for(int j = 1; j <= rows - i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}