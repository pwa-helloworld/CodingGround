#include<stdio.h>
#include<string.h>
#include<math.h>
int HexadecimalToDecimal(char *hex) {
    int p = 0; 
    int decimal = 0;
    int r, i;
    
    // instead of reading charcacters from Right-To-Left
    // we can also read character from Left-To-Right
    // we just have to initialize p with strlen(c) - 1
    // and decrement p in each iteration
    for(i = strlen(hex) - 1 ; i >= 0 ; --i){
        
        // converting c[i] to appropriate decimal form
        if(hex[i]>='0'&&hex[i]<='9'){
            r = hex[i] - '0';
        }
        else{
            r = hex[i] - 'A' + 10;
        }
        
        decimal = decimal + r * pow(16 , p);
        ++p;
    }
    
    return decimal;
}

int main() { 
    char hex[100];
    printf("Enter Hexadecimal: ");
    scanf("%s", hex);
    printf("\nDecimal: %d", HexadecimalToDecimal(hex));
    return 0;
}