#include <stdio.h>

int main() {

  int x, n;
  int temp, output;
  // int power(int x, int n);

  printf("Enter the base: ");
  scanf("%d", &x);
  printf("Enter the index: ");
  scanf("%d", &n);

  power(x, n);

  

  return 0;
}

int power(x, n) {
  int i = 0;
  int temp, output;

  temp = x;
  while (1) {
    temp = temp * x;
    i++;
    // printf("%d\n", temp);

    if (i == n - 1) break;
  }

  output = temp;
  printf("Output: %d", output);

  return output;
}