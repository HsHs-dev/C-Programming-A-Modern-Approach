/*
7. Suppose that the function f has the following definition:
int f(int a, int b) { … }
Which of the following statements are legal? (Assume that i has type int and x
has type double.) 
(a) i = f(83, 12);
(b) x = f(83, 12);
(c) i = f(3.15, 9.28);
(d) x = f(3.15, 9.28);
(e) f(83, 12);
*/

int f(int a, int b);

int main(void) {

  int i;
  double x;

  i = f(83, 12);
  x = f(83, 12);
  i = f(3.15, 9.28);
  x = f(3.15, 9.28);
  f(83, 12);

  return 0;
}

int f(int a, int b) {
  return a + b;
}