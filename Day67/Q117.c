/* Q117: Website exercise solution. */
#include <stdio.h>
int main(void) {
    int m,n,a[1000],b[1000],i=0,j=0;
    printf("Enter sizes m and n: ");
    if(scanf("%d %d",&m,&n)!=2||m<0||n<0||m>1000||n>1000) return 1;
    printf("Enter first sorted array: ");
    for(int x=0;x<m;x++) if(scanf("%d",&a[x])!=1) return 1;
    printf("Enter second sorted array: ");
    for(int x=0;x<n;x++) if(scanf("%d",&b[x])!=1) return 1;
    printf("Merged array: ");
    for(int x=0;x<m+n;x++) {
        int value;
        if(j==n||(i<m&&a[i]<=b[j])) value=a[i++];
        else value=b[j++];
        printf("%s%d",x?" ":"",value);
    }
    printf("\n");
    return 0;
}
