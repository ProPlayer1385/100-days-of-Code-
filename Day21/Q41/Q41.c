/* Q41: Swap the first and last digit of a number. */
#include <stdio.h>

int main(void) {
    long long n, temp, power = 1, result;
    int first, last;

    printf("Enter a positive number: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    if (n < 10) {
        printf("Number after swapping = %lld\n", n);
        return 0;
    }

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;
    result = n - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping = %lld\n", result);
    return 0;
}
