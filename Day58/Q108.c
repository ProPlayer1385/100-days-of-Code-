/* Q108: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,a[1000];
    long long result[1000],prefix=1,suffix=1;
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<1||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    for(int i=0;i<n;i++) {result[i]=prefix;prefix*=a[i];}
    for(int i=n-1;i>=0;i--) {result[i]*=suffix;suffix*=a[i];}
    printf("Products except self: ");
    for(int i=0;i<n;i++) printf("%s%lld",i?" ":"",result[i]);
    printf("\n");
    return 0;
}
