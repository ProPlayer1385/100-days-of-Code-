/* Q44: Find the sum of the series:
   1 + 3/4 + 5/6 + 7/8 + ... up to n terms. */
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

    sum = 1.0;

    for (int i = 2; i <= n; i++) {
        double numerator = 2.0 * i - 1.0;
        double denominator = 2.0 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.6f\n", sum);
    return 0;
}
