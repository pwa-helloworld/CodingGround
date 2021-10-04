#include <stdio.h>

int main() {
  char userInput[10000];

  scanf("$s", userInput);

  for (int i = 0; i <= sizeof(userInput); i++) {
    printf("%c", userInput[i]);
  }

  return 0;
}