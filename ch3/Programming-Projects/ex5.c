/*
5. Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form a magic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void) {

    printf("Enter the numbers from 1 to 16 in any order:\n");
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n", num13, num14, num15, num16);

    printf("Row sums: %d %d %d %d\n", \
        (num1 + num2 + num3 + num4), (num5 + num6 + num7 + num8), (num9 + num10 + num11 + num12), \
        (num13 + num14 + num15 + num16));

    printf("Column sums: %d %d %d %d\n", \
            (num1 + num5 + num9 + num13), (num2 + num6 + num10 + num14), (num3 + num7 + num11 + num15), \
            (num4 + num8 + num12 + num16));

    printf("Diagonal sums: %d %d\n", (num4 + num7 + num10 + num13), (num1 + num6 + num11 + num16));

    return 0;
}
