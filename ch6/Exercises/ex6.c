/*
6. Translate the program fragment of Exercise 1 into a single for statement.
*/

/*
Ex1:
1. What output does the following program fragment produce?
i = 1;
while (i <= 128) {
printf("%d ", i);
i *= 2;
}
*/

#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 128; i *= 2)
        printf("%d ", i);

    return 0;
}