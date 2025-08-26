/*
8. Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-
hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM
(either lower-case or upper-case). White space is allowed (but not required) between the
numerical time and the AM/PM indicator. Examples of valid input:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test for errors
*/

/*
#include <stdio.h>

int main(void) {

    printf("Enter a 24-hour time: ");
    int hours, mins;
    scanf("%d:%d", &hours, &mins);

    int time = (hours * 60) + mins;

    // the solution is to find the time between every two consequent departure times,
    // divide it by 2 and add it to the first departure time.
    // This will give you the upper bound for each flight.

    if (time >= 225 && time <= 531)
        printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
    else if (time > 531 && time <= 631)
        printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
    else if (time > 631 && time <= 732)
        printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n");
    else if (time > 732 && time <= 833)
        printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
    else if (time > 833 && time <= 892)
        printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
    else if (time > 892 && time <= 1042)
        printf("Closest departure time is 03:45 pm.m., arriving at 05:55 p.m.\n");
    else if (time > 1042 && time <= 1222)
        printf("Closest departure time is 07:00 pm.m., arriving at 09:20 p.m.\n");
    else
        printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    printf("Enter a 12-hour time: ");
    int hours, mins;
    char ch;
    scanf("%d:%d %c", &hours, &mins, &ch);

    ch = tolower(ch);

    if (ch == 'p') {
      if (hours != 12) {
        hours += hours + 12;
      }
    }

    int time = (hours * 60) + mins;

    // the solution is to find the time between every two consequent departure times,
    // divide it by 2 and add it to the first departure time.
    // This will give you the upper bound for each flight.

    if (time >= 225 && time <= 531)
        printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
    else if (time > 531 && time <= 631)
        printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
    else if (time > 631 && time <= 732)
        printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n");
    else if (time > 732 && time <= 833)
        printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
    else if (time > 833 && time <= 892)
        printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
    else if (time > 892 && time <= 1042)
        printf("Closest departure time is 03:45 pm.m., arriving at 05:55 p.m.\n");
    else if (time > 1042 && time <= 1222)
        printf("Closest departure time is 07:00 pm.m., arriving at 09:20 p.m.\n");
    else
        printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}