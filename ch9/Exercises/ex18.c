/*
18. Write a recursive version of the gcd function (see Exercise 3). Here’s the strategy to use for
computing gcd(m, n): If n is 0, return m. Otherwise, call gcd recursively, passing n as
the first argument and m % n as the second.
*/

int gcd(int m, int n) {
  if (n == 0) {
    return m;
  }
  return gcd(n, m % n);
}