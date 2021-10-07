#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>

int main() {

  int inputNum, currentSys, targetSys, remCheck, temp;
  bool correctInput = true;
  char hexChar[100000];

  int dec_to_bin(int num);
  int bin_to_dec(int num);
  int dec_to_hex(int num);
  int hex_to_dec(char *hexChar);

  char c[10000];


  printf("Please enter a set of number: ");
  scanf("%s", &c);

  inputNum = atoi(c);

  printf("Please enter the current number system: ");
  scanf("%d", &currentSys);

  printf("Please enter the number system you want the set of number be converted to: ");
  scanf("%d", &targetSys);


  // Convert method
  if (currentSys == 10 && targetSys == 2) { // dec to bin
    
    dec_to_bin(inputNum);

    // printf("%d", dec_to_bin);
  } else if (currentSys == 2 && targetSys == 10) { // bin to dec

    temp = inputNum;

    while (inputNum > 0) {
      
      remCheck = temp % 10;

      if (remCheck != 0 && remCheck != 1) {
        correctInput = false;
        break;

      } else {
        correctInput = true;
        break;
      }

      remCheck = remCheck / 10;

      // numCheck = inputNum / 10;
      // if (numCheck == 0) {
      //   bin_to_dec(inputNum);
      // }
    }
    
    if (correctInput) {
      bin_to_dec(inputNum);
    } else {
      printf("Error! That set of number is not a binary number.");
    }
  }

  if (currentSys == 10 && targetSys == 16) { // dec to hex
    dec_to_hex(inputNum);
    
  } else if (currentSys == 16 && targetSys == 10) { // hex to dec
    hex_to_dec(c);
  }

  if (currentSys == 16 && targetSys == 2) { // hex to bin
    
  } else if (currentSys == 2 && targetSys == 16) { // bin to hex
    
  }

  return 0;
}

int dec_to_bin(int num) {
  int bin = 0, rem = 0, place = 1;

  while (num) {
    rem = num % 2;
    num = num / 2;
    bin = bin + (rem * place);
    place = place * 10;
  }

  printf("Output = %d", bin);

  return bin;
}

int bin_to_dec(int num) {
  int dec = 0, rem = 0, index = 0;

  while (num > 0) {
    rem = num % 10;
    num = num / 10;
    dec = dec + pow(2, index) * rem;
    ++index;
  }

  printf("Output = %d", dec);

  return dec;
}

// int dec_to_hex(int num) {

//   char hex[10000];
//   int temp[10000];
//   int n = 0, j = 0;

//   int rem;

//   while (num > 0) {
//     rem = num % 16;

//     if (rem >= 10) {
//       rem = rem + 55;
//     }

//     temp[n] = rem;
//     n++;
//     num /= 16;
//   }

//   // printf("n: %d\n", n);

//   n = n - 1;

//   // printf("%d\n", temp[2]);

//   // printf("%d\n", n);

//   for (int i = n; i >= 0; i--) {
//     hex[i] = (char)temp[j];
//     // // printf("j: %d\n", j);
//     // printf("%d", hex[j]);
//     j++;
//     // printf("%d", i);
    
    
//   }

//   for (int z = 0; z <= n; z++) {
//     printf("%c", hex[z]);
//   }
//   // printf("\n  %d %d %d", hex[0], hex[1], hex[2]);

//   // printf("\nj: %d", j);
//   getch();
//   return 0;
// }


int dec_to_hex(int num) {
  int rem, i = 0;
  char hexnum[50];

  while(num != 0) {
    rem = num % 16;
    if(rem < 10)
        rem = rem + 48;
    else
        rem = rem + 55;
    hexnum[i] = rem;
    i++;
    num = num/16;
  }
  printf("\nOutput = ");
  for(i = i - 1; i >= 0; i--)
      printf("%c", hexnum[i]);
  getch();
  return 0;
}

int hex_to_dec(char hex[]) {
  
  // printf("%s", hex);
  int length = sizeof(hex);
  int dec[10000];

  // for (int i = 0; i < length; i++) {
  //   printf("%c\n", hex[i]);
  // }

  int i, j;

  

  printf("\n");
  // printf("%d\n", sizeof(hex));

  // for (int j = sizeof(hex); j >= 0; j--) {
  //   // printf("%c\n", hex[j]);
  //   printf("%d\n", j);
    
  // }
  
  return 0;
}