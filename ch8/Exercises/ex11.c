/*
11. Write a program fragment that declares an 8 × 8 char array named checker_board and
then uses a loop to store the following data into the array (one character per array element):
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
Hint: The element in row i, column j, should be the letter B if i + j is an even number.
*/

#define SIZE 8

int main(void) {

  char checker_board[SIZE][SIZE];

  char letter1 = 'B';
  char letter2 = 'R';

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if ((i + j) % 2 == 0) {
        checker_board[i][j] = letter1;
      } else {
        checker_board[i][j] = letter2;
      }
    }
  }

  return 0;

}