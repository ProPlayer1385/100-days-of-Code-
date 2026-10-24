/* Q120: Website exercise solution. */
#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[4096];
    int first=1;
    printf("Enter a sentence: ");
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(int i=0;s[i]!='\0';i++) {
        unsigned char c=(unsigned char)s[i];
        if(isalpha(c)) {
            s[i]=(char)(first?toupper(c):tolower(c));
            first=0;
        }
    }
    printf("Sentence case: %s",s);
    return 0;
}
