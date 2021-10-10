#include <stdio.h>

int main() {
  char ori[1000];
  char inv[1000];
  int n = 0, j= 0;

  printf("Ënter the original array: ");
  scanf("%s", ori);

  while (1) {
    if (ori[n] == '\0') {
      break;
    }
    printf("item %d: %c\n", n, ori[n]);
    n++;
  }
  printf("length of item: %d\n", n);


  for (int i = n - 1; i >= 0; i--) {
    printf("i = %d: %c\n", i, ori[i]);

    inv[j] = ori[i];
    printf("inv %d: %c\n", j, inv[j]);
    // printf("j: %d\n", j);
    j++;
    
    
  }

  // for () {

  // }

  printf("%s", inv);

  return 0;
}