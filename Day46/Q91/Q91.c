/* Q91: Remove all vowels from a string. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char str[MAX];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    printf("String after removing vowels: ");
    for (int i=0; str[i]!='\0'; i++)
    {
        char c=str[i], l=c;
        if (l>='A' && l<='Z') l=(char)(l+('a'-'A'));
        if (!(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')) putchar(c);
    }
    return 0;
}
