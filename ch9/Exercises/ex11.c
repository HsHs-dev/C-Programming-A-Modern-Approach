/*
11. Write the following function:
float compute_GPA(char grades[], int n);
The grades array will contain letter grades (A, B, C, D, or F, either
upper-case or lower case); n is the length of the array. The function should
return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1, and F = 0).
*/

#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void) {

  char grades[] = {'A', 'B', 'C', 'A', 'F', 'B'};
  int n = sizeof(grades ) / sizeof(grades[0]);

  printf("average: %f\n", compute_GPA(grades, n));
  return 0;
}

float compute_GPA(char grades[], int n) {
  float gpa = 0;
  for (int i = 0; i < n; i++) {
    switch (grades[i]) {
     case 'A': gpa += 4; break;
     case 'B': gpa += 3; break;
     case 'C': gpa += 2; break;
     case 'D': gpa += 1; break;
     case 'F': gpa += 0; break;
    }
  }

  return gpa / n;
}