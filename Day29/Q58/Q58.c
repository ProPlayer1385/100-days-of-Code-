/* Solution for website Q58 */
#include <stdio.h>
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);if(n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++)scanf("%d",&a[i]);int mn=a[0],mx=a[0];for(int i=1;i<n;i++){if(a[i]<mn)mn=a[i];if(a[i]>mx)mx=a[i];}printf("Maximum element = %d\nMinimum element = %d\n",mx,mn);return 0;}
