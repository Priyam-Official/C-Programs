
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i;
    int upper=0,lower=0;
    printf("enter the Name=");
    gets(name);
    
 
    for(i=0; name[i] != '\0'; i++){
            if(name[i]>='A' && name[i]<='Z') {
                upper++;
    }
    
   
    else if(name[i]>='a' && name[i]<='z') { 
               lower++;
    }
   
  
   
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    return 0;
}