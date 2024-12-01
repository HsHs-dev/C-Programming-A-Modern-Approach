/**********************************************************************************************
*  1. Create and run Kernighan and Ritchie's famous "hello, world" program:                   *
*  #include <stdio.h>                                                                         *
*  int main(void)                                                                             *
*  {                                                                                          *
*    printf("hello, world\n");                                                                *
*  }                                                                                          *
*  Do you get any warning message from the compiler? If so, what's needed to make it go away? *
***********************************************************************************************/

#include <stdio.h>
int main(void)
{
    printf("hello, world\n");
}

/*
if you compile with c89
gcc -std=c89 -Wall -o ex1.o ex1.c

you will get this message:
ex1.c: In function ‘main’:
ex1.c:15:1: warning: control reaches end of non-void function [-Wreturn-type]
   15 | }
      | ^

can be fixed by adding 'return 0;' statement to match the return type of function 'main'.
*/
