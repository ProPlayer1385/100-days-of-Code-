#include <stdio.h>
int main(void){int n,a[100],e=0,o=0;printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]%2==0)e++;else o++;}printf("Even elements = %d\nOdd elements = %d\n",e,o);return 0;}
