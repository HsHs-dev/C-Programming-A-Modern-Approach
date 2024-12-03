/***************************************************************************************************
*  3. Modify the program of Programming Project 2 so that it prompts the user to enter the radius  *
*  of the sphere.                                                                                  *
****************************************************************************************************/


#include <stdio.h>

int main(void) {

    printf("Enter the radius of the sphere: ");
    int radius;
    scanf("%d", &radius);
    int radiusCubed = radius * radius * radius;
    float pi = 3.14159265359;
    float volume = (4.0f / 3.0f) * pi * radiusCubed;

    printf("The volume of the %d radius sphere is %.3f\n", radius, volume);


    return 0;
}
