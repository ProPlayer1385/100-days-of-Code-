/* Q80: Multiply two matrices. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int r1, c1, r2, c2;
    int a[MAX][MAX], b[MAX][MAX];
    long long product[MAX][MAX] = {0};

    printf("Enter rows and columns of first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2 ||
        r1 < 1 || r1 > MAX || c1 < 1 || c1 > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter rows and columns of second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2 ||
        r2 < 1 || r2 > MAX || c2 < 1 || c2 > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                product[i][j] += (long long)a[i][k] * b[k][j];

    printf("Product matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%lld ", product[i][j]);
        printf("\n");
    }

    return 0;
}
