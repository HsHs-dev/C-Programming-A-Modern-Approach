/*
6. Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100, the program should print the following:
4
16
36
64
100
*/

#include "stdio.h"

int main(void) {

  printf("Enter a number: ");
  int num;
  scanf("%d", &num);

  int n = 2;
  while (n * n <= num) {
    printf("%d\n", n * n);
    n += 2;
  }

  return 0;

}