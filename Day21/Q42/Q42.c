/* Q42: Check if a number is a perfect number. */
#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}
