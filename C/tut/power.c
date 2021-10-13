#include <stdio.h>

int main() {

  int x, n, i = 0;
  int temp, output;
  int power(x, n);

  printf("Enter the base: ");
  scanf("%d", x);
  printf("Enter the index: ");
  scanf("%d", n);

  power(x, n);

  

  return 0;
}

int power(x, n) {
  int i = 0;
  int temp, output;

  temp = x;
  printf("%d\n", temp);
  while (1) {
    temp = temp * x;
    i++;
    printf("%d\n", temp);

    if (i == n) break;
  }

  output = temp;
  printf("Output: %d", output);

  return output;
}