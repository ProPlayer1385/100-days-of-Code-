/* Q112: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,a[1000];
    long long current,best;
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<1||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    current=best=a[0];
    for(int i=1;i<n;i++) {
        long long extended=current+a[i];
        current=extended>a[i]?extended:a[i];
        if(current>best) best=current;
    }
    printf("Maximum subarray sum = %lld\n",best);
    return 0;
}
