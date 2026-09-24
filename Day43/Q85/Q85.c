#include <stdio.h>
#define MAX 500

int main(void)
{
    char str[MAX];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    while (str[length] != '\0' && str[length] != '\n') length++;

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) printf("%c", str[i]);
    printf("\n");
    return 0;
}
