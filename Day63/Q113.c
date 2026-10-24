/* Q113: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,k,a[1000];
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<1||n>1000) return 1;
    printf("Enter elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    printf("Enter k (1-based): ");
    if(scanf("%d",&k)!=1||k<1||k>n) return 1;
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++)
        if(a[j]<a[i]) {int t=a[i];a[i]=a[j];a[j]=t;}
    printf("Kth smallest = %d\n",a[k-1]);
    return 0;
}
