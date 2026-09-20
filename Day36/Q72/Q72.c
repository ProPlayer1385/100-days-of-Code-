/* Q72: Find the sum of all elements in a matrix. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int rows, cols, a[MAX][MAX];
    long long sum = 0;

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
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %lld\n", sum);
    return 0;
}
