#include <stdio.h>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
}

void printHouse(int height) {
    
    for (int i = 0; i < height / 2; i++) {
        printSpaces(height / 2 - i);
        printStars(2 * i + 1);
        printf("\n");
    }
    
 
    for (int i = 0; i < height / 2; i++) {
        printSpaces(height / 2 - 1);
        printf("*");
        printSpaces(height - 2);
        printf("*\n");
    }
    
   
    printStars(height);
}

int main() {
    int height;

    printf("Enter the height of the house = ");
    scanf("%d", &height);

    if (height % 2 != 0) {
        printf("Height =\n");
        return 1;
    }

    printHouse(height);

    return 0;
}