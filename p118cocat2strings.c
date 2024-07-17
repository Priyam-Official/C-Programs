#include <stdio.h>
int main() {
  char s1[100] = "priyam", s2[100] = " is a good boy",s3[100];
  int length, i;
  
  
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  
  for (i = 0; s2[i] != '\0'; ++i, ++length) {
    s1[length] = s2[i];
  }

  
  s1[length] = '\0';


 puts(s1);

  return 0;
}