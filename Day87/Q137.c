/* Q137: Display a message based on an enum user role. */
#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main(void)
{
    int choice;
    enum Role role;

    printf("Choose a role (0=ADMIN, 1=USER, 2=GUEST): ");
    if (scanf("%d", &choice) != 1 || choice < ADMIN || choice > GUEST)
    {
        printf("Invalid role.\n");
        return 1;
    }

    role = (enum Role)choice;
    switch (role)
    {
        case ADMIN:
            printf("Welcome, Administrator. You have full access.\n");
            break;
        case USER:
            printf("Welcome, User. You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest. You have limited access.\n");
            break;
    }
    return 0;
}
