/*
7. Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply,
or divide two fractions (by entering either +, -, *, or / between the fractions).
*/

/*
#include <stdio.h>
int main(void) {

    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
*/

#include "stdio.h"

int main(void) {

  printf("Enter two fractions separated by an operation sign (+, -, *, or /): ");
  int num1, denom1, num2, denom2;
  char op;
  scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

  int num, denom;
  switch (op) {
    case '+':
      num = num1 * denom2 + num2 * denom1;
      denom = denom1 * denom2;
      break;
    case '-':
      num = num1 * denom2 - num2 * denom1;
      denom = denom1 * denom2;
      break;
    case '*':
      num = num1 * num2;
      denom = denom1 * denom2;
      break;
    case '/':
      num = num1 * denom2;
      denom = denom1 * num2;
      break;
    default:
      printf("Unknown operator.\n");
      return 1;
  }

  printf("The result is %d/%d\n", num, denom);

  return 0;
}