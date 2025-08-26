/*
5. In the SCRABBLE Crossword Game, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the letter’s rarity.
(Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K,
8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
of its letters:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function.
*/

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