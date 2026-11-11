/* Q139: Demonstrate that enum constants have integer values. */
#include <stdio.h>

enum Status
{
    PENDING = 10,
    APPROVED = 20,
    REJECTED = 30
};

int main(void)
{
    enum Status current = APPROVED;

    printf("PENDING = %d\n", PENDING);
    printf("APPROVED = %d\n", APPROVED);
    printf("REJECTED = %d\n", REJECTED);
    printf("Assigned enum variable = %d\n", (int)current);
    return 0;
}
