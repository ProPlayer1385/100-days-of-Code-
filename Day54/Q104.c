/* Q104: Find the pivot integer x. */
#include <stdio.h>

int main(void)
{
    long long n, total;
    long long left, right, answer = -1;

    printf("Enter a positive integer n: ");
    if (scanf("%lld", &n) != 1 || n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    total = n * (n + 1) / 2;
    left = 1;
    right = n;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long quotient = total / mid;
        long long remainder = total % mid;

        if (remainder == 0 && quotient == mid)
        {
            answer = mid;
            break;
        }

        if (mid < quotient)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("%lld\n", answer);
    return 0;
}
