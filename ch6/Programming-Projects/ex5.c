/*
5. Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one,
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
stopping when it reaches 0.
*/

#include "stdio.h"

int main(void) {

  printf("Enter a number: ");
  int num;
  scanf("%d", &num);

  do {

    printf("%d", num % 10);
    num /= 10;

  } while(num != 0);

  printf("\n");

  return 0;
}