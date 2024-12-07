/*
2. If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify
your answer.
*/

#include <stdio.h>

int main(void) {

    int i = 9, j = 7;

    printf("(-i)/j = %d\n", (-i)/j);
    printf("-(i/j) = %d\n", -(i/j));

    return 0;
}

/*
Not in C89. Suppose that i is 9 and j is 7. The value of (-i)/j could be either –1 or –2, depending on the implementation. On the other hand, the value of -(i/j) is always –1, regardless of the implementation. In C99, 
on the other hand, the value of (-i)/j must be equal to the value of -(i/j).
*/


/*
Implementation-Defined Behavior
The term implementation-defined will arise often enough that it’s worth taking a
moment to discuss it. The C standard deliberately leaves parts of the language
unspecified, with the understanding that an “implementation”—the software needed
to compile, link, and execute programs on a particular platform—will fill in the
details. As a result, the behavior of the program may vary somewhat from one
implementation to another. 

//The behavior of the / and % operators for negative operands
in C89 is an example of implementation-defined behavior.
Leaving parts of the language unspecified may seem odd or even dangerous,
but it reflects C’s philosophy. One of the language’s goals is efficiency, which often
means matching the way that hardware behaves. Some CPUs yield –1 when –9 is
divided by 7, while others produce –2; the C89 standard simply reflects this fact of
life.\\


It’s best to avoid writing programs that depend on implementation-defined
behavior. If that’s not possible, at least check the manual carefully—the C standard
requires that implementation-defined behavior be documented.
*/