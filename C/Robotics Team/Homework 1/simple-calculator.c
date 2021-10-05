#include <stdio.h>

int main() {
  char userInput[] = {};

  scanf("%s", userInput);

  printf("%d", sizeof(userInput));

  for (int i = 0; i <= sizeof(userInput); i++) {
    // printf("%c", userInput[i]);
    
  }

  return 0;
}