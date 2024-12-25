/*
8. The following table shows the daily flights from one city to another:
Departure time   Arrival time
8:00 a.m.         10:16 a.m.
9:43 a.m.         11:52 a.m.
11:19 a.m.        1:31 p.m.
12:47 p.m.        3:00 p.m.
2:00 p.m.         4:08 p.m.
3:45 p.m.         5:55 p.m.
7:00 p.m.         9:20 p.m.
9:45 p.m.         11:58 p.m.
Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
hour clock). The program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 ×
60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
midnight) than to any of the other departure times.
*/

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
}