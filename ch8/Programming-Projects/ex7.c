/*
7. Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
column sums:
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0
Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/

#include <stdio.h>

#define N 5

int main(void) {

  int arr[N][N];

  for (int i = 0; i < N; i++) {
    printf("Enter row %d: ", (i + 1));
    for (int j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Row totals: ");
  int row = 0;
   for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      row += arr[i][j];
    }
    printf("%d ", row);
    row = 0;
  }

 

  putchar('\n');

  printf("Column totals: ");
  int col = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      col += arr[j][i];
    }
    printf("%d ", col);
    col = 0;
  }

  putchar('\n');

  return 0;
}