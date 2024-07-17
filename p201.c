#include <stdio.h>

int main() {
    int rows;
    printf("\nEnter number of rows = ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {

        for(int k = 0; k < i; k++) {
            printf(" ");
        }
        
        for(int j = 0; j < rows - i; j++) {
            if (i % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
