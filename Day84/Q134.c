/* Q134: Print messages for SUCCESS, FAILURE, and TIMEOUT. */
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void)
{
    for (enum Status status = SUCCESS; status <= TIMEOUT; status++)
    {
        switch (status)
        {
            case SUCCESS: puts("SUCCESS: Operation completed."); break;
            case FAILURE: puts("FAILURE: Operation failed."); break;
            case TIMEOUT: puts("TIMEOUT: Operation timed out."); break;
        }
    }
    return 0;
}
