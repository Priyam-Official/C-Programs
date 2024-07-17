#include <stdio.h>

int main() {
    int rows = 5;
    printf("\n Enter number of rows=");
    scanf("%d",&rows);
    char alphabet = 'a';


    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows - i; j++) {
            printf("%c", alphabet + j);
        }
        printf("\n");
    }

    return 0;
}