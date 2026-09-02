/* Q46: Print the following pattern:
*****
*****
*****
*****
***** */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
