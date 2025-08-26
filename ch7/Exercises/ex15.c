/*
Use typedef to create types named Int8, Int16, and Int32. Define the types so that
they represent 8-bit, 16-bit, and 32-bit integers on your machine.
*/

#include <stdint.h>
#include <stdio.h>

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;

int main(void) {

  printf("%zu\n", sizeof(int8));
  printf("%zu\n", sizeof(int16));
  printf("%zu\n", sizeof(int32));

  return 0;

}