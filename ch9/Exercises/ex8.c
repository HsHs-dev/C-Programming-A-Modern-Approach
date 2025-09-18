/*
8. Which of the following would be valid prototypes for a function that returns nothing and has
one double parameter?
(a) void f(double x);
(b) void f(double);
(c) void f(x);
(d) f(double x);
*/

void f(double x);
void f(double);
void f(x); // A parameter list without types is only allowed in a function definition
f(double x); // Type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int

