#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "define.h"

int main() {
    grid_create();
    
    // write your code here
    int i;
    int pos;
    char sign;

    for (i = 0; i <= 8; i++) {
        if (i % 2 == 0) {
            sign = 'o';

            printf("Player 1 term! \n");
            printf("Please enter your position: ");
            scanf("%d", &pos);
            // printf("%d", pos);

            square[pos] = sign;
        } else {
            sign = 'x';

            printf("Player 2 term! \n");
            printf("Please enter your position: ");
            scanf("%d", &pos);

            square[pos] = sign;
        }
        // printf("Test");
        grid_create();
        
  
    }

    if (square[0] == square[1] == square[2]
        || square[3] == square[4] == square[5]
        || square[6] == square[7] == square[8]
        || square[0] == square[3] == square[6]) {

    }
    
    return(0);
}
