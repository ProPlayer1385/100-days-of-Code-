/* Q8: Sum of first n natural numbers */
#include <stdio.h>
int main(){ int n; long long s=0; printf("Enter n: "); scanf("%d",&n); for(int i=1;i<=n;i++) s+=i; printf("Sum of first %d natural numbers = %lld\n",n,s); return 0; }
