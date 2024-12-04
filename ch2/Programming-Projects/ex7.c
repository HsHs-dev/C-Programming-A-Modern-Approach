/****************************************************************************************************
*  7. Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay    *
*  that amount using the smallest number of $20, $10, $5, and $1 bills:                             *
*  Enter a dollar amount: 93                                                                        *
*  $20 bills: 4                                                                                     *
*  $10 bills: 1                                                                                     *
*  $5 bills: 0                                                                                      *
*  $1 bills: 3                                                                                      *
*  Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce       *
*  the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use  *
*  integer values throughout, not floating-point numbers.                                           *
*****************************************************************************************************/

#include <stdio.h>

int main(void) {

    printf("Enter a dollar amount: ");
    int amount;
    scanf("%d", &amount);

    int bills20 = amount / 20;
    amount = amount - bills20 * 20;
    int bills10 = amount / 10;
    amount = amount - bills10 * 10;
    int bills5 = amount / 5;
    amount = amount - bills5 * 5;
    int bills1 = amount / 1;

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf(" $5 bills: %d\n", bills5);
    printf(" $1 bills: %d\n", bills1);


    return 0;
}
