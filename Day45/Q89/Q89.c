#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX], target;
    int frequency = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    printf("Enter the character to find: ");
    if (scanf("%c", &target) != 1) return 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        if (str[i] == target) frequency++;

    printf("Frequency of '%c' = %d\\n", target, frequency);
    return 0;
}
