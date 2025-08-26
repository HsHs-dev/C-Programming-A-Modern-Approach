/*
5. Which one of the following is not a legal way to write the number 65? (Assume that the
character set is ASCII.)
(a) 'A'
(b) 0b1000001
(c) 0101
(d) 0x41
*/

#include <stdio.h>

int main(void) {

  int a = 'A';
  int b = 0b1000001;
  int c = 0101;
  int d = 0x41;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);

}

// ALL ARE VALID