/*
10. Show how to replace a continue statement by an equivalent goto statement.
*/

#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            goto even;
        
        printf("Odd.\n");
        goto odd;

        even:
        printf("Even.\n");

        odd:

    }

    return 0;
}