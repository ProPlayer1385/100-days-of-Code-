/* Q102: Index of the ceil of x in a sorted array - O(log n). */
#include <stdio.h>
#define MAX 1000

int main(void)
{
    int n, arr[MAX], x;
    int left, right, answer = -1;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x)
        {
            answer = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    printf("%d\n", answer);
    return 0;
}
