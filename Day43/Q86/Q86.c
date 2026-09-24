#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];
    int length = 0, palindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    while (str[length] != '\0' && str[length] != '\n') length++;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) printf("The string is a palindrome.\\n");
    else printf("The string is not a palindrome.\\n");
    return 0;
}
