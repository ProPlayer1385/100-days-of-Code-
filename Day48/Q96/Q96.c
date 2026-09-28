/* Q96: Reverse each word in a sentence without changing word order. */
#include <stdio.h>
#define MAX 500
void reverse(char s[], int l, int r)
{
    while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}
}
int main(void)
{
    char s[MAX];
    printf("Enter a sentence: "); if(fgets(s,sizeof(s),stdin)==NULL)return 1;
    int start=0;
    for(int i=0;;i++)
    {
        if(s[i]==' '||s[i]=='\t'||s[i]=='\n'||s[i]=='\0')
        {
            reverse(s,start,i-1); start=i+1; if(s[i]=='\0') break;
        }
    }
    printf("Sentence after reversing each word: %s",s);
    return 0;
}
