/* Q74: Find the transpose of a matrix. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int rows, cols, a[MAX][MAX], t[MAX][MAX];

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX || cols < 1 || cols > MAX)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j];
        }

    printf("Transpose:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
