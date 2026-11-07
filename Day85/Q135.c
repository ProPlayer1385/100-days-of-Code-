/* Q135: Assign explicit enum values starting at 10. */
#include <stdio.h>

enum Level { FIRST = 10, SECOND, THIRD, FOURTH };

int main(void)
{
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    return 0;
}
