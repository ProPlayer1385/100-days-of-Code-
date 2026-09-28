/* Q92: Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char str[MAX];
    int seen[26]={0};
    printf("Enter a lowercase string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    for (int i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            int k=str[i]-'a';
            if (seen[k]) { printf("First repeating lowercase alphabet = %c\n", str[i]); return 0; }
            seen[k]=1;
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
