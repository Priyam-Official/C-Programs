#include <stdio.h>

int main() {
    int i, a[] = {11, 5, 7, 90, 22, 55}, b[6], y, no, k = 0, j;

    for (i = 0; i < 6; i++) {
        y = 1;
        no = a[i];
        
        if (no == 1) {
            y = 0;
        } else {
            for (j = 2; j < no; j++) {
                if (no % j == 0) {
                    y = 0;
                    break;
                }
            }
        }
        
        if (y == 1) {
            b[k] = no;
            k++;
        }
    }
    printf("\n number of prime numbers = %d", k);
    for (i = 0; i < k; i++) {
        printf("\n %d ", b[i]);
    }
    printf("\n");

    return 0;
}
 