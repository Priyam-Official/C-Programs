#include <stdio.h>

void printSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j) % 2 != 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the square (n): ");
    scanf("%d", &n);

    printSquare(n);

    return 0;
}