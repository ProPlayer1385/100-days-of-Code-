#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += ('a' - 'A');
    }

    printf("Toggled string: %s", str);
    return 0;
}
