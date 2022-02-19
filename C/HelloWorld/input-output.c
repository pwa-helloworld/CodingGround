#include <stdio.h>
#include <unistd.h>

int main(void) {

  // Declare the variables
  int intVar;
  char chVar, chr;
  float fVar;
  const char string[100] = "Start Number";

  // char chr;
  // printf("Enter a character: \n");
  // scanf("%c", &chr);     
  // printf("You entered %c.", chr);  


  // --- Character ---

  // Input the Character
  printf("\n\nEnter the Character: ");
  scanf("%c", &chVar);

  // Output the Character
  printf("\nEntered character is: %c \n", chVar);

  // constant
  printf("%s \n", string);

  // --- Integer ---

  // Input the integer
  printf("Enter the integer: ");
  scanf("%d", &intVar);

  // Output the integer
  printf("\nEntered integer is: %d", intVar);

  // --- Float ---

  // Input the float
  printf("\n\nEnter the float: ");
  scanf("%f", &fVar);

  // Output the float
  printf("\nEntered float is: %f", fVar);

 

  // printf("\n\nThis is the last inetger input: ");
  // scanf("%d", &intVar);
  // printf("\nThe last input is: %d", intVar);


  printf("\n\nThe last char is: ");
  scanf("%c", &chr);

  printf("\nThe char is: %c", chr);
  

  return 0;
}