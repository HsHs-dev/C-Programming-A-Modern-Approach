/******************************************************************************************************
*  4. Suppose that we call scanf as follows:                                                          *
*  scanf("%d%f%d", &i, &x, &j);                                                                       *
*  If the user enters                                                                                 *
*  10.3 5 6                                                                                           *
*  what will be the values of i, x, and j after the call? (Assume that i and j are int variables      *
*  and x is a float variable.)                                                                        *
*******************************************************************************************************/

#include <stdio.h>

int main(void) {

    int i, j;
    float x;
    scanf("%d%f%d", &i, &x, &j);

    printf("i: %d\nx: %f\nj: %d\n", i, x, j);

    return 0;
}

/*
i: 10
x: 0.300000
j: 5
*/
