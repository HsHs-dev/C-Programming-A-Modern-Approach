/*
3. Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to contain '.'
characters and then replaces some of these characters by the letters A through Z, as
described in the original project. main then calls print_array to display the array on
the screen.
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

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {

  char matrix[GRID][GRID];
  generate_random_walk(matrix);
  print_array(matrix);

  return 0;
}

void generate_random_walk(char matrix[GRID][GRID]) {

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

 
}

void print_array(char matrix[10][10]) {

  for (int i = 0; i < GRID; i++) {
    for (int j = 0; j < GRID; j++)
      printf("%c ", matrix[i][j]);
    printf("\n");
  }
}