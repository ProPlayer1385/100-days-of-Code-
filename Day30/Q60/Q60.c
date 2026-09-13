#include <stdio.h>
int main(void){int n,a[100],p=0,ng=0,z=0;printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("Enter %d elements: ",n);for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>0)p++;else if(a[i]<0)ng++;else z++;}printf("Positive elements = %d\nNegative elements = %d\nZero elements = %d\n",p,ng,z);return 0;}
