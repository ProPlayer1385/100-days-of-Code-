/* Q103: Find the leftmost pivot index - O(n). */
#include <stdio.h>
#define MAX 1000

int main(void)
{
    int n, arr[MAX], pivot = -1;
    long long total = 0, leftSum = 0;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long rightSum = total - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivot);
    return 0;
}
