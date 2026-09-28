/* Q100: Print all sub-strings of a string. */
#include <stdio.h>
#define MAX 200
int main(void)
{
    char s[MAX]; int n=0;
    printf("Enter a string: "); if(fgets(s,sizeof(s),stdin)==NULL)return 1;
    while(s[n]!='\0'&&s[n]!='\n')n++;
    printf("Substrings:\n");
    for(int start=0;start<n;start++)
        for(int end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++) putchar(s[i]);
            putchar('\n');
        }
    return 0;
}
