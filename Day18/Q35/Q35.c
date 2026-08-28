/* Q35: Fibonacci series */
#include <stdio.h>
int main(){ int n; long long a=0,b=1,c; printf("Enter number of terms: "); scanf("%d",&n); printf("Fibonacci series: "); for(int i=0;i<n;i++){printf("%lld ",a);c=a+b;a=b;b=c;} printf("\n"); return 0; }
