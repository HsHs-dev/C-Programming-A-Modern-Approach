/*****************************************************************************************************
*  5. Write a program that asks the user to enter a value for x and then displays the value of the   *
*  following polynomial:                                                                             *
*  3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6                                                                 *
******************************************************************************************************/

#include <stdio.h>

int main(void) {

    printf("Enter a value for x: ");
    int x;
    scanf("%d", &x);

    int x2 = x * x;
    int x3 = x2 * x;
    int x4 = x3 * x;
    int x5 = x4 * x;

    int result = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;

    printf("%d\n", result);


    return 0;
}
