#include <stdio.h>
#include <string.h>


int main() {
    char str1[50] = "HI MY NAME IS";
    const char str2[] = "PRIYAM";
    
    strcpy(str1, str2); // only str2 is print not str1
    
    printf("%s", str1); 
    
    return 0;
}