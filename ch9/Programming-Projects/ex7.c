/*
7. The power function of Section 9.6 can be made faster by having it calculate x^n in a differ-
ent way. We first notice that if n is a power of 2, then x^n can be computed by squaring. For
example, x^4 is the square of x2, so x^4 can be computed using only two multiplications instead
of three. As it happens, this technique can be used even when n is not a power of 2. If n is
even, we use the formula xn = (x^(n/2))^2. If n is odd, then xn = x × x^(n–1). Write a recursive func-
tion that computes x^n. (The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls
power to compute xn, and then displays the value returned by the function.
*/

/*
int power(int x, int n)
{
 if (n == 0)
   return 1;
 else
   return x * power(x, n - 1);
}
*/

#include <stdio.h>
int power(int x, int n);

int main(void) {

  printf("Enter the number: ");
  int num;
  scanf("%d", &num);

  printf("Enter the power: ");
  int pow;
  scanf("%d", &pow);

  printf("%d to the %d power = %d\n", num, pow, power(num, pow));

  return 0;
}

int power(int x, int n) {

  if (n == 0) {
    return 1;
  }

  if (n % 2 == 0) {
    int half = power(x, n / 2);
    return half * half;
  } else {
    return x * power(x, n - 1);
  }
}