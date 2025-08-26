/*
10. Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/

#include "stdio.h"
#include "ctype.h"

int main(void) {

  printf("Enter a sentence: ");

  int total = 0;
  char ch;
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    switch (ch) {
      case 'a': case 'e': case 'i': case 'o': case 'u': total++;
      break;
    }
  }

  printf("Your sentence contains %d vowels\n", total);

  return 0;
}