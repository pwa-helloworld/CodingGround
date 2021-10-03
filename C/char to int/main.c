// #include<stdio.h>
// #include <stdlib.h>

// /*------ Char to int digit conversion --------*/
// //parameter : pass char
// //return : int (converted corresponding digit)
// // int charToInt(char c){
// // 	int num = 0;

// // 	//Substract '0' from entered char to get
// // 	//corresponding digit
// // 	num = c - '0';

// // 	return num;
// // }

// // /* You can write one liner statement e.g.
// // int charToInt(char c){

// // return c - '0';
// // }
// // */

// // int main(){
// // 	char c;
// // 	int numer=0;

// // 	printf("Enter digit Character :");
// // 	scanf("%c",&c);

// // 	numer = charToInt(c);
// // 	printf("Character %c -> number %d",c,numer);

// int main() {
//   // char str[10] = "122";
//   // int x = atoi(str);
//   // printf("Converting '122': %d\n", x);

// 	// return 0;

  
// }




#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000]; 
    scanf("%s", str);
    int exclamationCheck = 0;
    int i=0;
    while (str[i]!='\0'){
        if (str[i]=='/'){
            exclamationCheck = 1;
            break;
        }
        i++;
    }
    printf("exclamationCheck = %d\n", exclamationCheck);
    return 0;
}
