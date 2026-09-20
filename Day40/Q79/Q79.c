/* Q79: Perform diagonal traversal of a matrix.
   Example:
   1 2 3
   4 5 6
   7 8 9
   Output: 1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>
#define MAX 20

int main(void)
{
    int rows, cols, a[MAX][MAX];

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
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");

    for (int d = 0; d <= rows + cols - 2; d++)
    {
        if (d % 2 == 0)
        {
            int row = (d < rows) ? d : rows - 1;
            int col = d - row;

            while (row >= 0 && col < cols)
            {
                printf("%d ", a[row][col]);
                row--;
                col++;
            }
        }
        else
        {
            int col = (d < cols) ? d : cols - 1;
            int row = d - col;

            while (col >= 0 && row < rows)
            {
                printf("%d ", a[row][col]);
                row++;
                col--;
            }
        }
    }

    printf("\n");
    return 0;
}
