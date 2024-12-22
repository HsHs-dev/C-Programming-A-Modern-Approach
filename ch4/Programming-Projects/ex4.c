/*
4. Write a program that reads an integer entered by the user and displays it in octal (base 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To
convert the number to octal, first divide it by 8; the remainder is the last digit of the octal
number (1, in this case). Then divide the original number by 8 and repeat the process to
arrive at the next-to-last digit. (printf is capable of displaying numbers in base 8, as we’ll
see in Chapter 7, so there’s actually an easier way to write this program.)
*/

#include <stdio.h>

int main(void) {

    printf("Enter a number between 0 and 32767: ");
    int num;
    scanf("%d", &num);

    int dig1, dig2, dig3, dig4, dig5;

    dig1 = num % 8;
    num /= 8;
    dig2 = num % 8;
    num /= 8;
    dig3 = num % 8;
    num /= 8;
    dig4 = num % 8;
    num /= 8;
    dig5 = num;

    printf("In octal, your number is: %d%d%d%d%d\n", 
    dig5, dig4, dig3, dig2, dig1);


    return 0;
}

/*
Easy way:

    printf("Enter a number between 0 and 32767: ");
    int num;
    scanf("%d", &num);

    printf("In octal, your number is: %.5o\n", num);

    return 0;
*/