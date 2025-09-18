/*
1. Write a program that asks the user to enter a series of integers (which it stores in an array),
then sorts the integers by calling the function selection_sort. When given an array
with n elements, selection_sort must do the following:
1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first n – 1 elements of the array.
*/

#include <stdio.h>
#define SIZE 100

int selection_sort(int a[], int n);

int main(void) {

  printf("Enter a series of integers separated by spaces: ");

  int arr[SIZE];
  int num, i = 0;
  while (scanf("%d", &arr[i]) == 1) {
    i++;
    if (i >= 100) break;
  }

  selection_sort(arr, i);

  return 0;
}

int selection_sort(int a[], int n) {
  int max = a[0];
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (a[i] > max)
    }
  }
}