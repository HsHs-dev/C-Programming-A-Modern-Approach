/*
6. The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
messages. Here’s a typical B1FF communiqué:
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Write a “B1FF filter” that reads a message entered by the user and translates it into B1FFspeak:
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Your program should convert the message to upper-case letters, substitute digits for certain
letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.
Hint: Store the original message in an array of characters, then go back through the array,
translating and printing characters one by one.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {

  printf("Enter message: ");

  bool printed = true;

  char ch;
  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (printed) {
      printf("In B1FF-speak: ");
      printed = false;
    }
    switch (ch) {
      case 'A': ch = '4'; break;
      case 'B': ch = '8'; break;
      case 'E': ch = '3'; break;
      case 'I': ch = '1'; break;
      case 'O': ch = '0'; break;
      case 'S': ch = '5'; break;
    }

    putchar(ch);
  }

  for (int i = 0; i < 10; i++) {
    putchar('!');
  }

  putchar('!');
  putchar('\n');

  return 0;
}