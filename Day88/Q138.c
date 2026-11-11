/* Q138: Print enum names and integer values using a loop. */
#include <stdio.h>

enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void)
{
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (enum Day day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("%s = %d\n", names[day], (int)day);
    }
    return 0;
}
