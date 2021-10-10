// #include<stdio.h>
// #include <stdlib.h>

// int main() {
//     // Converting a numeric string
//     char str[10];
//     scanf("%s", str);
//     int x = atoi(str);
//     printf("Converting 'x': %d\n", x);

//     // // Converting an alphanumeric string
//     // char str2[10] = "Hello!";
//     // x = atoi(str2);
//     // printf("Converting 'Hello!': %d\n", x);

//     // // Converting a partial string
//     // char str3[10] = "99Hello!";
//     // x = atoi(str3);
//     // printf("Converting '99Hello!': %d\n", x);
//     return 0;
// }


#include <stdio.h>
int n;
char a[200];

int caten()
{
// int *numchar;
// *numchar = a;

printf("%s", a);
// printf("%d", *numchar);
return 0;
}


int main()
{
n = 0;
printf("Enter some integers (maximum of 20):\n");
while((a[n++]=getchar( )) != '\n' );
a[n] = '\0';
if (a[n] == '\0')
caten();
// printf("%s", a);
return 0;

}