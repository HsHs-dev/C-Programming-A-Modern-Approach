/*
9. Write a program that asks the user for a 12-hour time, then displays the time in 24-hour
form:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

	int hour, minutes;
	char am_pm;
	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c", &hour, &minutes, &am_pm);

	am_pm = tolower(am_pm);

	if (am_pm == 'p' && hour != 12) {
    hour += 12;
  }

	printf("Equivalent 24-hour time: %d:%d\n", hour, minutes);

	return 0;
}