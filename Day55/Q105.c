/* Q105: Find the majority element - O(n). */
#include <stdio.h>
#define MAX 1000

int main(void)
{
    int n, nums[MAX];
    int candidate = 0, count = 0, occurrences = 0;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            occurrences++;

    if (occurrences > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
