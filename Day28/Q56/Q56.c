/* Solution for website Q56 */
#include <stdio.h>
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);if(n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Array elements: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");return 0;}
