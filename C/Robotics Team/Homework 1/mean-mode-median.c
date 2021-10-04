#include <stdio.h>
#include <stdlib.h>

int main() {

  char input[20];
  int num[20];
  int i = 0;
  int meanCal();

  printf("Enter a number to append to the number set. Enter '/' to stop appending.\n");

  while (1) {
    scanf("%s", input);

    /*check if entered '/'*/
    if (input[0] == '/') {
      printf("stop\n");
      break;
    } else {
      /*save the input into num array*/
      int temp;
      temp = atoi(input);

      num[i] = temp;
      printf("The %d of data is: %d\n", i, num[i]);
      i++;
    }
  }

  for (int j = 0; j < sizeof(num); ++j) {
    printf("$d", num[j]);
    printf(", ");
  }

  // meanCal(num);
  // int mean, n;
  // int arraySize = sizeof(num);
  // int intSize = sizeof(num[0]);
  // int length = arraySize / intSize;

  // printf("%d", length);


  
  // printf("%d", n);


  

  return 0;
}

// int meanCal(data) {
//   int mean, n;
//   int arraySize = sizeof(data);
//   int intSize = sizeof(data[0]);



  
//   printf("%d", n);



//   return 0;
// }