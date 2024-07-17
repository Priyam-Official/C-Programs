#include <stdio.h>  

int main() {  
    int a[3], b[3], merged[6], n1, n2, i;

    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

  
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

   
    for(i = 0; i < n1; i++) {
        merged[i] = a[i];  
    }
    for(i = 0; i < n2; i++) {
        merged[n1+i] = b[i];  
    }

  
    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;  
}

