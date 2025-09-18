/*
14. The following function is supposed to return true if any element of the array a has the
value 0 and false if all elements are nonzero. Sadly, it contains an error. Find the error and
show how to fix it:
bool has_zero(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == 0)
      return true;
    else
      return false;
}
*/

#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void) {

  int a[] = {0, 0, 0, 0, 0, 0};
  int b[] = {1, 2, 3, 4, 5, 6};
  printf("%d\n", has_zero(a, (sizeof(a) / sizeof(a[0]))));
  printf("%d\n", has_zero(b, (sizeof(b) / sizeof(b[0]))));

  return 0;
}

bool has_zero(int a[], int n) {

  int i;
  for (i = 0; i < n; i++)
    if (a[i] == 0)
      return true;
    
  return false;
}