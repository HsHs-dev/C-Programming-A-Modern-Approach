/*
5. Is the following if statement legal?
if (n >= 1 <= 10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 0?
*/

#include <stdio.h>

int main(void) {

    int n = 0;

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    return 0;
}

/*
Will always evaluates to true.
*/