/* Q106: Next greater element using brute-force nested loops. */
#include <stdio.h>
#define MAX 1000

int main(void)
{
    int n, arr[MAX];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        int nextGreater = -1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);
        if (i < n - 1)
            printf(",");
    }

    printf("\n");
    return 0;
}
