/* Q34: Prime number */
#include <stdio.h>
int main(){ int n,prime=1; printf("Enter an integer: "); scanf("%d",&n); if(n<2) prime=0; for(int i=2;i*i<=n;i++) if(n%i==0){prime=0;break;} if(prime)printf("%d is prime.\n",n);else printf("%d is not prime.\n",n); return 0; }
