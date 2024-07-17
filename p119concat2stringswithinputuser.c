#include <stdio.h>  

main() {  
    char a[3], b[3], merged[6] ;
     int n1, n2, i;
    
    
    printf("Enter %d elements for the first string:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%c", &a[i]);
    }

  
    
    printf("Enter %d elements for the second string:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%c", &b[i]);
    }

   
    for(i = 0; i < n1; i++) {
        merged[i] = a[i];  
    }
    for(i = 0; i < n2; i++) {
        merged[n1+i] = b[i];  
    }

  
    printf("Merged string is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%c ", merged[i]);
    }

    return 0;  
}
