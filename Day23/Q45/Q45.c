/* Q45: Find the sum of the series:
   2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
#include <stdio.h>

int main(void) {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.6f\n", sum);
    return 0;
}
