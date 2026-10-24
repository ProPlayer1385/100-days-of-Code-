/* Q115: Website exercise solution. */
#include <stdio.h>
int main(void) {
    char s[4096],t[4096];
    int freq[26]={0},valid=1;
    printf("Enter first lowercase string: ");
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    printf("Enter second lowercase string: ");
    if(fgets(t,sizeof(t),stdin)==NULL) return 1;
    for(int i=0;s[i]&&s[i]!='\n';i++) {
        if(s[i]<'a'||s[i]>'z') {valid=0;break;}
        freq[s[i]-'a']++;
    }
    for(int i=0;t[i]&&t[i]!='\n';i++) {
        if(t[i]<'a'||t[i]>'z') {valid=0;break;}
        freq[t[i]-'a']--;
    }
    for(int i=0;i<26;i++) if(freq[i]!=0) valid=0;
    puts(valid?"Anagram":"Not Anagram");
    return 0;
}
