/* Q94: Find the longest word in a sentence. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char s[MAX]; int bestStart=0,bestLen=0,start=0,len=0;
    printf("Enter a sentence: "); if (fgets(s,sizeof(s),stdin)==NULL) return 1;
    for (int i=0;;i++)
    {
        char c=s[i];
        if (c!=' ' && c!='\t' && c!='\n' && c!='\0') { if(len==0) start=i; len++; }
        else { if(len>bestLen){bestLen=len;bestStart=start;} len=0; if(c=='\0') break; }
    }
    if(bestLen==0){printf("No word found.\n");return 0;}
    printf("Longest word: "); for(int i=0;i<bestLen;i++) putchar(s[bestStart+i]); printf("\n");
    return 0;
}
