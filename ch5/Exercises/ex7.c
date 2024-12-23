/*
7. What does the following statement print if i has the value 17? What does it print if i has the
value –17?
printf("%d\n", i >= 0 ? i : -i);
*/

#include <stdio.h>

int main(void) {

    int i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}

/*
i = 17 -> 17
i = -17 -> 17
*/