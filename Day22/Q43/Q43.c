/* Q43: Check if a number is a strong number. */
#include <stdio.h>

int main(void) {
    int n, temp, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    temp = n;

    do {
        int digit = temp % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++)
            factorial *= i;

        sum += factorial;
        temp /= 10;
    } while (temp > 0);

    if (sum == n)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}
