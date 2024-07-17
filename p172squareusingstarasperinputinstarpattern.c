#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    

   
    
  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}