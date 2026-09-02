/* Q40: Find the 1's complement of a binary number and print it.
   Solved without arrays/strings. */
#include <stdio.h>

int main(void) {
    unsigned long long n, temp, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%llu", &n);

    temp = n;

    if (n == 0) {
        printf("1's complement = 1\n");
        return 0;
    }

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 0;
        }

        complement += (1 - digit) * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement = %0*llu\n", 0, complement);
    return 0;
}
