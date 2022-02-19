#include <stdio.h>

int main() {

  char string[4] = {'A', 'B', 'C', 'D'};

  string[1] = 'q';

  printf("%c", string[1]);

  return 0;
}