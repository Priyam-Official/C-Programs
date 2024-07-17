#include <stdio.h>
#include <string.h>

int main() {
   char name[100];
   int i;
   printf("\nEnter a Name : ");
   gets(name);

   for (i = 0; name[i]!='\0'; i++) {
      if(name[i] >= 'a' && name[i] <= 'z') {
         name[i] = name[i] - 32;
      }
      else if(name[i] >= 'A' && name[i] <= 'Z'){
    name[i] = name[i] +32;
      }
   }
   printf("\n  %s", name);
   return 0;
}
