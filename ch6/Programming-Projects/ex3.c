/*
3. Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:
Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD
*/

#include <stdio.h>

int main(void) {

  printf("Enter a fraction: ");
  int num, denom, n, m;
  scanf("%d/%d", &num, &denom);

  n = num;
  m = denom;

  while (n != 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms %d/%d\n", (num/m), (denom/m));

  return 0;

}
