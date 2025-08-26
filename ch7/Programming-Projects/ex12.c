/*
12. Write a program that evaluates an expression:
Enter an expression: 1+2.5*3
Value of expression: 10.5
The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other
operator).
*/

#include "stdio.h"

int main(void) {

  printf("Enter an expression: ");
  float sum;
  scanf("%f", &sum);

  char ch;
  while ((ch = getchar()) != '\n') {

    float num;
    scanf("%f", &num);

    switch (ch) {
      case '+': sum += num; break;
      case '-': sum -= num; break;
      case '*': sum *= num; break;
      case '/': sum /= num; break;
    }
  }

  printf("Value of expression: %.2f\n", sum);


  return 0;
}