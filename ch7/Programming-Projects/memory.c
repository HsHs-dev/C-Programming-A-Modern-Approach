

#include "stdio.h"
#include <stdlib.h>

int main(void) {

  int n = 5;

  int* ptr = malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("memory allocation failed\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    *(ptr + i) = i;
  }

  printf("printing the array:\n");

  for (int i = 0; i < n; i++) {
    printf("%d\n", *(ptr + i));
  }

  printf("\nexpanding the array\n");

  ptr = (int*) realloc(ptr, (n * 2) * sizeof(int));

  for (int i = 5; i < (n * 2); i++) {
    ptr[i] = i;
  }

  for (int i = 0; i < (n * 2); i++) {
    printf("%d\n", ptr[i]);
  }

  free(ptr);

  return 0;

}