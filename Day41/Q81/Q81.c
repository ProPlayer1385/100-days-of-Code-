/* Q81: Count characters in a string without using built-in length functions. */
#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    printf("Number of characters = %d\n", length);
    return 0;
}
