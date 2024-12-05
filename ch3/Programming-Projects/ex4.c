/**************************************************************************************************
*  4. Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-    *
*  xxxx and then displays the number in the form xxx.xxx.xxx:                                     *
*  Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900                                            *
*  You entered 404.817.6900                                                                       *
***************************************************************************************************/

#include <stdio.h>

int main(void) {

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int pt1, pt2, pt3;
    scanf("(%d) %d-%d", &pt1, &pt2, &pt3);

    printf("Yout entered %d.%d.%d\n", pt1, pt2, pt3);

    return 0;
}
