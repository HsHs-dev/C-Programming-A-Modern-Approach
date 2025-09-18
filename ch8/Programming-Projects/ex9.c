/*
9. Write a program that generates a “random walk” across a 10 × 10 array. The array will contain characters
(all '.' initially). The program must randomly “walk” from element to element, always going up, down, left, or right by one element.
The elements visited by the
program will be labeled with the letters A through Z, in the order visited. Here’s an example
of the desired output:
A . . . . . . . . . 
B C D . . . . . . . 
. F E . . . . . . . 
H G . . . . . . . . 
I . . . . . . . . . 
J . . . . . . . Z . 
K . . R S T U V Y . 
L M P Q . . . W X . 
. N O . . . . . . . 
. . . . . . . . . . 
Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
After generating a number, look at its remainder when divided by 4. There are four possible
values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before
performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to
an element that already has a letter assigned. If either condition is violated, try moving in
another direction. If all four directions are blocked, the program must terminate. Here’s an
example of premature termination:
A B G H I . . . . . 
. C F . J K . . . . 
. D E . M L . . . . 
. . . . N O . . . . 
. . W X Y P Q . . . 
. . V U T S R . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
Y is blocked on all four sides, so there’s no place to put Z.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define NUM_LETTERS 26
#define GRID 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main(void) {

  char matrix[GRID][GRID];
  for (int i = 0; i < GRID; i++) {
    for (int j = 0; j < GRID; j++)
      matrix[i][j] = '.';
  }

  const char letters[NUM_LETTERS] = {
      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  srand((unsigned)time(NULL));

  int row = 0;
  int col = 0;
  matrix[row][col] = letters[0];

  for (int i = 1; i < NUM_LETTERS; i++) {

    char current_letter = letters[i];
    bool valid = true;
    int direction;

    while (valid) {
      direction = rand() % 4;
      switch (direction) {
      case UP:
        if ((row - 1) >= 0 && matrix[row - 1][col] == '.') {
          row--;
          matrix[row][col] = current_letter;
          valid = false;
        }
        break;

      case DOWN:
        if ((row + 1) < GRID && matrix[row + 1][col] == '.') {
          row++;
          matrix[row][col] = current_letter;
          valid = false;
        }
        break;

      case LEFT:
        if ((col - 1) >= 0 && matrix[row][col - 1] == '.') {
          col--;
          matrix[row][col] = current_letter;
          valid = false;
        }
        break;

      case RIGHT:
        if ((col + 1) < GRID && matrix[row][col + 1] == '.') {
          col++;
          matrix[row][col] = current_letter;
          valid = false;
        }
        break;

      } // switch

      // check if the letter is surrounded to terminate
      if (((row - 1 < 0) || matrix[row - 1][col] != '.') &&
          ((row + 1 >= GRID) || matrix[row + 1][col] != '.') &&
          ((col - 1 < 0) || matrix[row][col - 1] != '.') &&
          ((col + 1 >= GRID) || matrix[row][col + 1] != '.')) {
        valid = false;
      }

    } // while

  } // for

  for (int i = 0; i < GRID; i++) {
    for (int j = 0; j < GRID; j++)
      printf("%c ", matrix[i][j]);
    printf("\n");
  }

  return 0;
}