/* Q133: Month enumeration and days per month (non-leap year). */
#include <stdio.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main(void)
{
    const char *names[] = {"", "January", "February", "March", "April", "May",
                           "June", "July", "August", "September", "October",
                           "November", "December"};
    const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (enum Month month = JANUARY; month <= DECEMBER; month++)
        printf("%s: %d days\n", names[month], days[month]);
    return 0;
}
