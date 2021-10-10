// #include <stdio.h>

// int main() {
//   // char userInput[] = {};

//   // scanf("%s", userInput);

//   // printf("%d", sizeof(userInput));

//   // for (int i = 0; i <= sizeof(userInput); i++) {
//   //   // printf("%c", userInput[i]);
    
//   // }

//   int firstNum, secNum;
//   int operator;
//   float result;

//   printf("Enter the first num: ");
//   scanf("%d", firstNum);

//   printf("\nEnter the operator: ");
//   scanf("%d", operator);

//   printf("\nEnter the second num: ");
//   scanf("%d", secNum);

//   printf("cal ");

//   printf("%d", operator);

//   // switch (operator)
//   // {
//   // case '+':
//   //   result = firstNum + secNum;
//   //   break;
  
//   // case '-':
//   //   result = firstNum - secNum;
//   //   break;

//   // case '*':
//   //   result = firstNum * secNum;
//   //   break;

//   // case '/':
//   //   result = firstNum / secNum;
//   //   break;
  
//   // default:
//   //   break;
//   // }

//   // printf("The result is %f", result);

//   return 0;
// }
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include<stdlib.h>

float firf, secf;
char f;
char opt;
char k[100], str[100], firInt[100], secInt[100];
int i,j,z;
int a,b,c = 0;
char *store;

int main(void) {

  scanf("%s", str);

  for (i = 0; i < 100; i++) {
 
 
 
  if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {

    if(str[i] == '+') {
      f = '+';
    }
    if(str[i] == '-') {
      f = '-';
    }
    if(str[i] == '*') {
      f = '*';
    }
    if(str[i] == '/') {
      f = '/';
    }
    a = i;

  }
}

 
  for (j = 0; j < a; j++) {
    firInt[j] = str[j];
  }
 
  for (z = a+1; z < 100; z++) {
    secInt[z-a-1] = str[z];
  }

  b = atoi(firInt);
  c = atoi(secInt);
  firf = b;
  secf = c;
  if(f == '+') {
      printf("%f", firf + secf);
  }
  if(f == '-') {
    printf("%f", firf - secf);
  }
  if(f == '*') {
    printf("%f", firf * secf);
  }
  if(f == '/') {
    printf("%f", firf / secf);
  }

  return 0;

}