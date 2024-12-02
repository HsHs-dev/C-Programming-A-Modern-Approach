/***************************************************************************************************
*  4. Write a program that declares several int and float variables—without initializing           *
*  them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)   *
****************************************************************************************************/

#include <stdio.h>

int main(void) {

    int num1, num2, num3;
    float flo1, flo2,flo3;

    printf("integers are: %d %d %d\n", num1, num2, num3);
    printf("floats are: %f %f %f\n", flo1, flo2, flo3);

    return 0;
}


/*
compiling with gcc -Wall -o ex4.o ex4.c
in all the runs, the results are 0s for ints and 0.000000 for floats.
*/
