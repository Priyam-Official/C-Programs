#include <stdio.h>

int main() {
    int rows;
    printf("\n Enter number of rows =");
    scanf("%d",&rows);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows - i; j++) {
            printf("%d", rows - j);
        }
        printf("\n");
    }

    return 0;
}