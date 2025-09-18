/*
3. Write a declaration of an array named weekend containing seven bool values. Include an
initializer that makes the first and last values true; all other values should be false.
*/

#include <stdbool.h>

#define DAYS 7

int main(void) {

  bool weekend[DAYS] = {false};
  weekend[0] = true;
  weekend[DAYS - 1] = true;


  return 0;
}