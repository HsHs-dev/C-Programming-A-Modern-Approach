/*
17. Rewrite the fact function so that it’s no longer recursive
*/

int fact(int n) {
  int result = 1;
  while (n > 0) {
    result *= n;
    n--;
  }

  return result;
}