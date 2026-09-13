#include <stdio.h>
void rev(int a[],int l,int r){while(l<r){int t=a[l];a[l]=a[r];a[r]=t;l++;r--;}}
int main(void){int n,a[100],k;printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Enter k: ");scanf("%d",&k);k%=n;if(k<0)k+=n;if(k){rev(a,0,n-1);rev(a,0,k-1);rev(a,k,n-1);}printf("Array after right rotation: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");return 0;}
