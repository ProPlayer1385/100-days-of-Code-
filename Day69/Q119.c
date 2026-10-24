/* Q119: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,a[1000],repeated=0,found=0;
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<2||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    for(int i=0;i<n&&!found;i++) {
        for(int j=0;j<i;j++) if(a[i]==a[j]) {
            repeated=a[i];found=1;break;
        }
    }
    if(found) printf("Repeated element = %d\n",repeated);
    else puts("No repeated element found.");
    return 0;
}
