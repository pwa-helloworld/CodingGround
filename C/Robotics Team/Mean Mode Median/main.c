#include <stdio.h>
#include <stdbool.h>

int main() {

  // --- Declare variables ---
  int userInput, num;
  bool input = true;
  bool dataEnd = false;

  // --- init ---
  

  // while (dataEnd = true) {
    
  // }
  // do {

    
  //   printf("continuous");

  // } while(dataEnd != false);

  
  
  printf("Enter a number to append to the number set. Enter '/' to stop appending.\n");
    scanf("%d", userInput);
    if ((userInput = getchar()) != '/') {
      printf("This is a number");
      num = userInput - '0';
      printf("%d", num);
      // printf("%d", userInput);
    } else {
      printf("End");
      dataEnd = false;
    }  

  




  return 0;
}