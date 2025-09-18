/*
4. Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
main will call read_word twice, once for each of the two words entered by the user. As it
reads a word, read_word will use the letters in the word to update the counts array, as
described in the original project. (main will declare two arrays, one for each word. These
arrays are used to track how many times each letter occurs in the words.) main will then
call equal_array, passing it the two arrays. equal_array will return true if the ele-
ments in the two arrays are identical (indicating that the words are anagrams) and false
otherwise.
*/


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {


  int word1[SIZE] = {0};
  int word2[SIZE] = {0};

  printf("Enter first word: ");
  read_word(word1);

  printf("Enter second word: ");
  read_word(word2);

  bool anagrams = equal_array(word1, word2);

    if (anagrams) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }


  return 0;
}

void read_word(int counts[]) {
  char ch;
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    counts[ch - 'a']++;
  }
}

bool equal_array(int counts1[], int counts2[]) {

  for (int i = 0; i < SIZE; i++) {
    if (counts1[i] != counts2[i]) {
      return false;
    }
  }
  
  return true;
}