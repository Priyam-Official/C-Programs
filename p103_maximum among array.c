#include <stdio.h>
int main() {
  int n;
  int a[100];
  printf("Enter the number of elements : ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &a[i]);
  }

  
  for (int i = 1; i < n; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("Largest element = %d", a[0]);

  return 0;
}