/*
8. What output does the following for statement produce?
for (i = 10; i >= 1; i /= 2)
printf("%d ", i++);
*/

#include <stdio.h>

int main(void) {

    for (int i = 10; i >= 1; i /= 2)
        printf("%d", i++);

    return 0;
}

/*
105311111111111...
*/