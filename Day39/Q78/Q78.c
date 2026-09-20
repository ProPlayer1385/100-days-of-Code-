/* Q78: Find the sum of main diagonal elements for a square matrix. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int n, a[MAX][MAX];
    long long sum = 0;

    printf("Enter order of square matrix: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of main diagonal elements = %lld\n", sum);
    return 0;
}
