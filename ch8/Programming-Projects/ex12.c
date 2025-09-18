/*
12. Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the letters
are stored in an array. The array will have 26 elements, corresponding to the 26 letters of the
alphabet. For example, element 0 of the array will store 1 (because the SCRABBLE value of
the letter A is 1), element 1 of the array will store 3 (because the SCRABBLE value of the
letter B is 3), and so forth. As each character of the input word is read, the program will use
the array to determine the SCRABBLE value of that character. Use an array initializer to set
up the array.
*/

/*
#include "stdio.h"
#include "ctype.h"

int main(void) {

  printf("Enter a word: ");

  int sum = 0;
  char ch;
  while ((ch = getchar()) != '\n') {

    ch = tolower(ch);

    switch (ch) {
      case 'a': case 'e': case 'i': case 'l': case 'n': case 'o':
      case 'r': case 's': case 't': case 'u': sum += 1; break;
      case 'd': case 'g': sum += 2; break;
      case 'b': case 'c': case 'm': case 'p': sum += 3; break;
      case 'f': case 'h': case 'v': case 'w': case 'y': sum += 4; break;
      case 'k': sum += 5; break;
      case 'j': case 'x': sum += 8; break;
      case 'q': case 'z': sum += 10; break;
    }

  }

  printf("Scrabble value: %d\n", sum);


  return 0;
}
*/

#include <stdio.h>
#include <ctype.h>

#define ALPHA 26

int main(void) {

  int alpha[ALPHA] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
  };

  printf("Enter a word: ");
  int sum = 0;
  char ch;
  while((ch = getchar()) != '\n') {
    ch = tolower(ch);
    sum += alpha[ch - 'a'];
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}