/* Q29: Factorial */
#include <stdio.h>
int main(){ int n; unsigned long long f=1; printf("Enter a non-negative integer: "); scanf("%d",&n); if(n<0){printf("Factorial is not defined for negative numbers.\n");return 0;} for(int i=2;i<=n;i++) f*=i; printf("%d! = %llu\n",n,f); return 0; }
