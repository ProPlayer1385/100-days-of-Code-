/* Q109: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,k,a[1000];
    long long sum=0,best;
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<1||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    printf("Enter k: ");
    if(scanf("%d",&k)!=1||k<1||k>n) return 1;
    for(int i=0;i<k;i++) sum+=a[i];
    best=sum;
    for(int i=k;i<n;i++) {sum+=a[i]-a[i-k];if(sum>best) best=sum;}
    printf("Maximum sum = %lld\n",best);
    return 0;
}
