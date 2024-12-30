/*
7. Translate the program fragment of Exercise 2 into a single for statement.
*/

/*
Ex2:
2. What output does the following program fragment produce?
i = 9384;
do {
printf("%d ", i);
i /= 10;
} while (i > 0);
*/

#include <stdio.h>

int main(void) {

    for (int i = 9384; i > 0; i /= 10)
        printf("%d", i);
    
    return 0;
}