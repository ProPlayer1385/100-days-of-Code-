/* Q82: Print each character of a string on a new line. */
#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c\n", str[i]);

    return 0;
}
