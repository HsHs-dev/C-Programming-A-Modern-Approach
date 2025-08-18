/*
7. Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i.
Don’t rewrite the program; in particular, don’t use any multiplication
*/

/*
square3.c Prints a table of squares using an odd method
#include <stdio.h>
int main(void)
{
 int i, n, odd, square;

 printf("This program prints a table of squares.\n");
 printf("Enter number of entries in table: ");
 scanf("%d", &n);
 i = 1;
 odd = 3;
 for (square = 1; i <= n; odd += 2) {
 printf("%10d%10d\n", i, square);
 ++i;
 square += odd;
 }
 return 0;
}
*/

#include "stdio.h"

int main(void) {

  int n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  odd = 3;
  for (int i = 1, square = 1; i <= n; odd += 2, i++) {

    printf("%10d%10d\n", i, square);
    square += odd;

  }


  return 0;
}
