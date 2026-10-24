/* Q107: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n, a[1000];
    printf("Enter array size: ");
    if (scanf("%d", &n)!=1 || n<1 || n>1000) return 1;
    printf("Enter array elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    for(int i=0;i<n;i++) {
        int previous=-1;
        for(int j=i-1;j>=0;j--) if(a[j]>a[i]) { previous=a[j]; break; }
        if(i) printf(",");
        printf("%d",previous);
    }
    printf("\n");
    return 0;
}
