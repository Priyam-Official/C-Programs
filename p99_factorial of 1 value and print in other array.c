
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int a[] = {5, 6, 7, 4};
     unsigned long long b[4];
    int n=4;

  
    for (int i = 0; i < n; i++) {
        b[i] = factorial(a[i]);
    }

   
    
    for (int i = 0; i < n; i++) {
        printf(" %llu",  b[i]);
    }

    return 0;
}