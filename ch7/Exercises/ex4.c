/*
4. If c is a variable of type char, which one of the following statements is illegal?
(a) i += c; // i has type int \\
(b) c = 2 * c - 1;
(c) putchar(c);
(d) printf(c);
*/

#include <stdio.h>
int main(void) {

  char c;
  int i = 1;
  i += c;
  c = 2 * c - 1;
  putchar(c);
  // printf(c); Incompatible integer to pointer conversion passing 'char' to parameter of type 'const char *'

}