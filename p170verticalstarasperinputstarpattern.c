#include <stdio.h>

int main() {
    int i;
    int n ; 
    printf("Enter number= ");
    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        printf("*\n");
    }

    return 0;
}