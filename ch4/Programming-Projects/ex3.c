/*
3. Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. Hint: See the upc.c program
of Section 4.1.
*/

#include <stdio.h>

int main(void) {

    int dig1, dig2, dig3;
    printf("Enter the three-digit number: ");
    scanf("%1d", &dig1);
    scanf("%1d", &dig2);
    scanf("%1d", &dig3);
        
    printf("The reversal is: %d%d%d\n", dig3, dig2, dig1);



    return 0;
}