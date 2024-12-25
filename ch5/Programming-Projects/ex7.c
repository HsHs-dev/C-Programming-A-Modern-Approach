/*
7. Write a program that finds the largest and smallest of four integers entered by the user:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void) {

    printf("Enter four integers: ");
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int small1 = num1;
    int small2 = num3;
    int large1 = num2;
    int large2 = num4;
    int smallest;
    int largest;
    
    if (num2 < num1) {
        small1 = num2;
        large1 = num1;
    }

    if (num4 < num3) {
        small2 = num4;
        large2 = num3;
    }

    smallest = small1;
    largest = large1;

    if (small2 < small1) smallest = small2;
    if (large2 > large1) largest = large2;
    
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);

    return 0;
}