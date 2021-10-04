#include <stdio.h>
int main()
{
  // variable
  int numbers[] = {8, 20, 30, 40, 50, 45, 353, 2};

  // calculate size in bytes
  int arraySize = sizeof(numbers);
  int intSize = sizeof(numbers[0]);

  // length
  int length = arraySize / intSize;
  printf("[0]: %d\n", numbers[0]);

  printf("ArraySize = %d bytes.\n", arraySize);
  printf("IntSize = %d bytes.\n", intSize);
  printf("Length of array = %d \n", length);
  return 0;
}