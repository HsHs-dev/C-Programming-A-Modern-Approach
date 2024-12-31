/*
14. Find the error in the following program fragment and fix it.
if (n % 2 == 0);
printf("n is even\n");
*/

#include <stdio.h>

int main(void) {

    int n = 14;
    if (n % 2 == 0)
        printf("%d is even.\n", n);

    return 0;
}