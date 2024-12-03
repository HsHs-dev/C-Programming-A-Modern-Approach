/****************************************************************************************************
*  2. Write a program that computes the volume of a sphere with a 10-meter radius, using the for-   *
*  mula v = 4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-         *
*  pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself   *
*  twice to compute r3.                                                                             *
*****************************************************************************************************/

#include <stdio.h>

int main(void) {

    int radius = 10;
    int radiusCubed = radius * radius * radius;
    float pi = 3.14159265359;
    float volume = (4.0f / 3.0f) * pi * radiusCubed;

    printf("The volume of the 10 radius sphere is %.3f\n", volume);


    return 0;
}

/*
4 / 3 making it an integer division will result in lose of precision.
4 / 3 = 1
4.0 / 3.0 = 1.33333...
*/
