/* Q39: Find the product of odd digits of a number. */
#include <stdio.h>

int main(void) {
    long long n;
    unsigned long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) n = -n;

    if (n == 0) {
        printf("There are no odd digits.\n");
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }

    if (found)
        printf("Product of odd digits = %llu\n", product);
    else
        printf("There are no odd digits.\n");

    return 0;
}
