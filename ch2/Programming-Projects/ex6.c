/**************************************************************************************************
*  6. Modify the program of Programming Project 5 so that the polynomial is evaluated using the   *
*  following formula:                                                                             *
*  ((((3x + 2)x – 5)x – 1)x + 7)x – 6                                                             *
***************************************************************************************************/


#include <stdio.h>

int main(void) {

    printf("Enter a value for x: ");
    int x;
    scanf("%d", &x);

    int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%d\n", result);


    return 0;
}
