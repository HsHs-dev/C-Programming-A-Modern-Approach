/*
11. Write a program that asks the user for a two-digit number, then prints the English word for
the number:
Enter a two-digit number: 45
You entered the number forty-five.
Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the
word for the second digit. Don’t forget that the numbers between 11 and 19 require special
treatment.
*/

#include <stdio.h>

int main(void) {

    printf("Enter a two digit number: ");
    int num;
    scanf("%d", &num);

    switch(num) {

        case 10:
            printf("You entered the number ten.\n");
            return 1;
        case 11:
            printf("You entered the number eleven.\n");
            return 1;
        case 12:
            printf("You entered the number twelve.\n");
            return 1;
        case 13:
            printf("You entered the number thirteen.\n");
            return 1;
        case 14:
            printf("You entered the number fourteen.\n");
            return 1;
        case 15:
            printf("You entered the number fifteen.\n");
            return 1;
        case 16:
            printf("You entered the number sixteen.\n");
            return 1;
        case 17:
            printf("You entered the number seventeen.\n");
            return 1;
        case 18:
            printf("You entered the number eighteen.\n");
            return 1;
        case 19:
            printf("You entered the number nineteen.\n");
            return 1;
    }


    int dig1, dig2;
    dig2 = num % 10;
    num /= 10;
    dig1 = num;

    if (dig1 == 0) {
        printf("You entered an invalid two-digits number.\n");
        return 1;
    }

    printf("You entered the number ");

    switch(dig1) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    switch(dig2) {
        case 0:
            printf("\n");
            break;
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
    }


    return 0;
}