#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char inputString[100];
    int count=0;   
     
    printf("Enter a Name: "); 
    fgets(inputString, sizeof(inputString), stdin);   
 
    printf(" Consonant in the Name: "); 
     
    for (int i = 0; i < strlen(inputString); i++) { 
        char ch = inputString[i]; 
         
        
        if (ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C' || ch == 'd' || ch == 'D' || ch == 'f' || ch == 'F' || ch == 'g' || ch == 'G'||ch == 'h' || ch == 'H' || ch == 'j' || ch == 'J' || ch == 'k' || ch == 'K' || ch == 'l' || ch == 'L' || ch == 'm' || ch == 'M'|| ch == 'n'||ch == 'N' || ch == 'p' || ch == 'P' || ch == 'q' || ch == 'Q' || ch == 'r' || ch == 'R' || ch == 's' || ch == 'S' || ch == 't'||ch == 'T' || ch == 'v' || ch == 'V' || ch == 'w' || ch == 'W' || ch == 'x' || ch == 'X' || ch == 'y' || ch == 'Y' || ch == 'z'|| ch=='Z') { 
            printf("%c ", ch);   
            count ++;
        } 
    } 
     
    printf("\n"); 
    printf("\n count =%d",count);
 
    return 0; 
} 