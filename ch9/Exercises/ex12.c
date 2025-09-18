/*
12. Write the following function:
double inner_product(double a[], double b[], int n);
The function should return a[0] * b[0] + a[1] * b[1] + … + a[n-1] * b[n-1].
*/

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void) {

  double a[] = {1.2, 2.5, 3.0, 4.8};
  double b[] = {0.5, 1.5, -2.0, 3.3};

  printf("Inner product = %.2f\n", inner_product(a, b, 4));

  return 0;
}

double inner_product(double a[], double b[], int n) {
  double result = 0;
  for (int i = 0; i < n; i++) {
    result += a[i] * b[i];
  }

  return result;
}