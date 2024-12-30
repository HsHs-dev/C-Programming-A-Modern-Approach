/*
9. Translate the for statement of Exercise 8 into an equivalent while statement. You will
need one statement in addition to the while loop itself.
*/

/*
Ex8:
8. What output does the following for statement produce?
for (i = 10; i >= 1; i /= 2)
printf("%d ", i++);
*/

#include <stdio.h>

int main(void) {

    int i = 10;
    while (i >= 1) {
        printf("%d", i++);
        i /= 2;
    }

    return 0;
}