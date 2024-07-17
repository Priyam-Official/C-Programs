#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char inputString[100];
    int count=0;   
     
    printf("Enter a Name: "); 
    fgets(inputString, sizeof(inputString), stdin);   
 
    printf(" Vowels in the Name: "); 
     
    for (int i = 0; i < strlen(inputString); i++) { 
        char ch = inputString[i]; 
         
        
        if (ch != 'a' && ch != 'A' && ch != 'e' && ch != 'E' && ch != 'i'&& ch != 'I' && ch != 'o' || ch != 'O' || ch != 'u' || ch != 'U' ) { 
            printf("%c ", ch);   
            count ++;
        } 
    } 
     
    printf("\n"); 
    printf("\n count =%d",count);
 
    return 0; 
} 