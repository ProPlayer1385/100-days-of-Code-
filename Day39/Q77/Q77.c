/* Q77: Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>
#define MAX 20

int main(void)
{
    int n, a[MAX][MAX], distinct = 1;

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

    for (int i = 0; i < n && distinct; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }

    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
