/*
12. The following “prime-testing” loop appeared in Section 6.4 as an example:
for (d = 2; d < n; d++)
if (n % d == 0)
break;
This loop isn’t very efficient. It’s not necessary to divide n by all numbers between 2 and
n – 1 to determine whether it’s prime. In fact, we need only check divisors up to the square
root of n. Modify the loop to take advantage of this fact. Hint: Don’t try to compute the
square root of n; instead, compare d * d with n.
*/

#include <stdio.h>

int main(void) {


    int n = 311, i;
    for (i = 2; (i * i) <= n; i++)
        if (n % i == 0)
            break;

    if (i * i <= n)
        printf("%d is divisble by %d\n", n, i);
    else
        printf("%d is prime.\n", n);

    return 0;
}