/* Q111: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,k,a[1000];
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<1||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    printf("Enter k: ");
    if(scanf("%d",&k)!=1||k<1||k>n) return 1;
    printf("First negative in each window: ");
    for(int i=0;i<=n-k;i++) {
        int first=0;
        for(int j=i;j<i+k;j++) if(a[j]<0) {first=a[j];break;}
        printf("%s%d",i?" ":"",first);
    }
    printf("\n");
    return 0;
}
