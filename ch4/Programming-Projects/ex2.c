/*
2. Extend the program in Programming Project 1 to handle three-digit numbers.
*/


#include <stdio.h>

int main(void) {


    printf("Enter three-digit number: ");
    int num;
    scanf("%d", &num);

    int digit1, digit2, digit3;
    
    digit1 = num % 10;
    num = num / 10;
    digit2 = num % 10;
    num = num / 10;
    digit3 = num;

    printf("The reversal is: %d%d%d\n", digit1, digit2, digit3);


    return 0;
}