/*
13. Write a program that calculates the average word length for a sentence:
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.
*/

#include "stdio.h"

int main(void) {

  printf("Enter a sentence: ");


  float sum = 0;
  int counter = 0, word = 0;
  char ch;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      sum += word;
      word = 0;
      counter++;
      continue;
    }
    word++;
  }
  
  sum += word;
  counter++;

  printf("Average word length: %.1f\n", sum / counter);

  return 0;
}