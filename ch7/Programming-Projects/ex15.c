/*
15. Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
Factorial of 6: 720
(a) Use a short variable to store the value of the factorial. What is the largest value of n
for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using a long long variable instead (if your compiler supports the
long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a long double variable instead.
In cases (e)–(g), the program will display a close approximation of the factorial, not necessarily the exact value
*/

#include <stdio.h>

int main(void) {

  short s;
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;

  printf("Enter a positive integer: ");
  int n;
  scanf("%d", &n);

  s = i = l = ll = 1;
  f = d = ld = 1.0;

  for (int k = 1; k <= n; k++) {
    s *= k;
    i *= k;
    l *= k;
    ll *= k;
    f *= k;
    d *= k;
    ld *= k;
  }

  printf("Factorial of %d using different types:\n", n);
  printf("short: %hd\n", s);
  printf("int: %d\n", i);
  printf("long: %ld\n", l);
  printf("long long: %lld\n", ll);
  printf("float: %.0f\n", f);
  printf("double: %.0f\n", d);
  printf("long double: %.0Lf\n", ld);

  return 0;
}