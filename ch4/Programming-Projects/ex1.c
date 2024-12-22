/*
1. Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
is the last digit in n and n / 10 is n with the last digit removed.
*/

#include <stdio.h>

int main(void) {


    printf("Enter two-digit number: ");
    int num;
    scanf("%d", &num);

    int digit1, digit2;
    
    digit1 = num % 10;
    num = num / 10;
    digit2 = num;

    printf("The reversal is: %d%d\n", digit1, digit2);


    return 0;
}