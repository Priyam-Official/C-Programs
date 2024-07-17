#include <stdio.h>

void printW(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n * 5; j++) {
            if (j % n == 0 || (j % n == n - 1) || (i == j % n && j < n * 4) || (i + j % n == n - 1 && j > n * 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of W: ");
    scanf("%d", &n);
    printW(n);
    return 0;
}