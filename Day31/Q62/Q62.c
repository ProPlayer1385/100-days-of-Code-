#include <stdio.h>
int main(void){int n,a[100];printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0,j=n-1;i<j;i++,j--){int t=a[i];a[i]=a[j];a[j]=t;}printf("Reversed array: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");return 0;}
