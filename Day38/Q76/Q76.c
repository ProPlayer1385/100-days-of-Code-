/* Q76: Check if a matrix is symmetric. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int n, a[MAX][MAX], symmetric = 1;

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

    for (int i = 0; i < n && symmetric; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
