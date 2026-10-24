/* Q116: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int n,target,a[1000],found=0;
    printf("Enter array size: ");
    if(scanf("%d",&n)!=1||n<2||n>1000) return 1;
    printf("Enter positive elements: ");
    for(int i=0;i<n;i++) if(scanf("%d",&a[i])!=1) return 1;
    printf("Enter target: ");
    if(scanf("%d",&target)!=1) return 1;
    for(int i=0;i<n&&!found;i++) for(int j=i+1;j<n;j++)
        if((long long)a[i]+a[j]==target) {
            printf("%d %d\n",i,j);
            found=1;
            break;
        }
    if(!found) puts("-1 -1");
    return 0;
}
