/* Q73: Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int rows, cols, a[MAX][MAX];
    long long rowSum[MAX] = {0};

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX || cols < 1 || cols > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Row sums: ");
    for (int i = 0; i < rows; i++)
        printf("%lld%s", rowSum[i], (i == rows - 1) ? "\n" : " ");

    return 0;
}
