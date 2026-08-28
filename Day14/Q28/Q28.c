/* Q28: Product of even numbers 1 to n */
#include <stdio.h>
int main(){ int n; unsigned long long p=1; printf("Enter n: "); scanf("%d",&n); for(int i=2;i<=n;i+=2) p*=i; printf("Product of even numbers from 1 to %d = %llu\n",n,p); return 0; }
