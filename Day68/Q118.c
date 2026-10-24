/* Q118: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,a[1000];
    long long missing;
    printf("Enter array size n (numbers 0 to n with one missing): ");
    if(scanf("%d",&n)!=1||n<0||n>1000) return 1;
    printf("Enter %d elements: ",n);
    missing=(long long)n*(n+1)/2;
    for(int i=0;i<n;i++) {
        if(scanf("%d",&a[i])!=1) return 1;
        missing-=a[i];
    }
    printf("Missing number = %lld\n",missing);
    return 0;
}
