/* Q93: Check if two strings are anagrams of each other. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char a[MAX], b[MAX];
    int freq[256]={0};
    printf("Enter first string: "); if (fgets(a,sizeof(a),stdin)==NULL) return 1;
    printf("Enter second string: "); if (fgets(b,sizeof(b),stdin)==NULL) return 1;
    for (int i=0; a[i]!='\0' && a[i]!='\n'; i++) freq[(unsigned char)a[i]]++;
    for (int i=0; b[i]!='\0' && b[i]!='\n'; i++) freq[(unsigned char)b[i]]--;
    for (int i=0;i<256;i++) if (freq[i]!=0) { printf("The strings are not anagrams.\n"); return 0; }
    printf("The strings are anagrams.\n");
    return 0;
}
