#include <stdio.h>
#include <string.h>


int main() {
    char str1[50] = "HI MY NAME IS";
    const char str2[] = "PRIYAM";
    
    strcat(str1, str2); 
    
    printf("%s", str1); 
    
    return 0;
}