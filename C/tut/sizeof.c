#include <stdio.h>
int main()
{
  // // variable
  // int numbers[] = {8, 20, 30, 40, 50, 45, 353, 2};

  // // calculate size in bytes
  // int arraySize = sizeof(numbers);
  // int intSize = sizeof(numbers[0]);

  // // length
  // int length = arraySize / intSize;
  // printf("[0]: %d\n", numbers[0]);

  // printf("ArraySize = %d bytes.\n", arraySize);
  // printf("IntSize = %d bytes.\n", intSize);
  // printf("Length of array = %d \n", length);





  char c[100];
  scanf("%s", c);
  int n = 0;

  while (1) {
    if (c[n] == '\0') {
      break;
    }
    printf("item %d: %c\n", n, c[n]);
    n++;
  }
  printf("%d", n);


  return 0;
}