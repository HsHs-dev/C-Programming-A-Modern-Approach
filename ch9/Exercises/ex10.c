/*
10. Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
*/

#include <complex.h>
#include <stdio.h>
int largest(int a[], int n);
int average(int a[], int n);
int positives(int a[], int n);

#define SIZE 7

int main(void) {

  int a[SIZE] = {4, 3, -2 , -1, 10, 0, 5};
  printf("largest: %d\n", largest(a, SIZE));
  printf("average: %d\n", average(a, SIZE));
  printf("positives: %d\n", positives(a, SIZE));

  return 0;
}


int largest(int a[], int n) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }

  return max;
}

int average(int a[], int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += a[i];
  }

  return total / n;
}

int positives(int a[], int n) {
  int pos = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      pos++;
    }
  }

  return pos;
}
