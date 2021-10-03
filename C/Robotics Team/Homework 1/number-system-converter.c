#include <stdio.h>
#include <math.h>
// #include<conio.h>
#include <stdbool.h>

int main() {

  int inputNum, currentSys, targetSys, remCheck, temp;
  bool correctInput = true;

  printf("Please enter a set of number: ");
  scanf("%d", &inputNum);

  printf("Please enter the current number system: ");
  scanf("%d", &currentSys);

  printf("Please enter the number system you want the set of number be converted to: ");
  scanf("%d", &targetSys);


  // Convert method
  if (currentSys == 10 && targetSys == 2) {
    // dec to bin
    dec_to_bin(inputNum);
    // printf("%d", dec_to_bin);
  } else if (currentSys == 2 && targetSys == 10) {
    // bin to dec

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

  if (currentSys == 10 && targetSys == 16) {
    // dec to hex
  } else if (currentSys == 16 && targetSys == 10) {
    // hex to dec
  }

  if (currentSys == 16 && targetSys == 2) {
    // hex to bin
  } else if (currentSys == 2 && targetSys == 16) {
    // bin to hex
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

int dec_to_hex(int num) {


  return 0;
}