/* Q75: Add two matrices. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int rows, cols;
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX || cols < 1 || cols > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("Sum matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
