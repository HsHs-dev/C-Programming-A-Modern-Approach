/*
4. (C99) Repeat Exercise 3, but this time use a designated initializer. Make the initializer as
short as possible.
*/

#include <stdbool.h>

#define DAYS 7

int main(void) {

  bool weekend[DAYS] = {[0] = true, [DAYS - 1] = true};

  return 0;
}