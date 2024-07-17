#include <stdio.h>

void add(int *x, int *y) {
    printf("Addition: %d + %d = %d\n", *x, *y, (*x + *y));
}

void subtract(int *x, int *y) {
    printf("Subtraction: %d - %d = %d\n", *x, *y, (*x - *y));
}

void multiply(int *x, int *y) {
    printf("Multiplication: %d * %d = %d\n", *x, *y, (*x * *y));
}

void divide(int *x, int *y) {
    if (*y != 0) {
        printf("Division: %d / %d = %d\n", *x, *y, (*x / *y));
    }
}

int main() {
    int a;
    int b;
    printf("\n Enter a =");
    scanf("%d",&a);
      printf("\n Enter b =");
    scanf("%d",&b);

    int *x = &a;
    int *y = &b;

    printf("Values: a = %d, b = %d\n", a, b);

    add(x, y);
    subtract(x, y);
    multiply(x, y);
    divide(x, y);

    return 0;
}
