#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z'))) special++;
    }

    printf("Spaces = %d\\n", spaces);
    printf("Digits = %d\\n", digits);
    printf("Special characters = %d\\n", special);
    return 0;
}
