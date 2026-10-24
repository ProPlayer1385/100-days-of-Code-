/* Q114: Website exercise solution. */
#include <stdio.h>
int main(void) {
    char s[4096];
    int last[256],start=0,best=0;
    printf("Enter a string: ");
    if(fgets(s,sizeof(s),stdin)==NULL) return 1;
    for(int i=0;i<256;i++) last[i]=-1;
    for(int i=0;s[i]!='\0'&&s[i]!='\n';i++) {
        unsigned char c=(unsigned char)s[i];
        if(last[c]>=start) start=last[c]+1;
        last[c]=i;
        if(i-start+1>best) best=i-start+1;
    }
    printf("Longest unique substring length = %d\n",best);
    return 0;
}
