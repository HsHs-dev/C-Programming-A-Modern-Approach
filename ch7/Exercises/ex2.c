/*
2. Which of the following are not legal constants in C? Classify each legal constant as either
integer or floating-point.
(a) 010E2
(b) 32.1E+5
(c) 0790
(d) 100_000
(e) 3.978e-2
*/

float a = 010E2;
float b = 32.1E+5;
// int c = 0790; Invalid digit '9' in octal constant
// int d = 100_000; Invalid suffix '_000' on integer constant
float e = 3.978e-2;
