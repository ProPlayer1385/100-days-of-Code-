/* Q30: Reverse a number */
#include <stdio.h>
int main(){ long long n,x,rev=0; printf("Enter a number: "); scanf("%lld",&n); x=n; while(x!=0){rev=rev*10+x%10;x/=10;} printf("Reversed number = %lld\n",rev); return 0; }
