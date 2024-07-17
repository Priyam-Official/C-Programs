#include <stdio.h>

int main() {
    int rows, cols;
    
 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    

    
   
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
