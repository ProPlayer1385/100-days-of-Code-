/* Q32: Palindrome number */
#include <stdio.h>
int main(){ long long n,x,rev=0; printf("Enter a number: "); scanf("%lld",&n); x=n; while(x!=0){rev=rev*10+x%10;x/=10;} if(rev==n) printf("%lld is a palindrome.\n",n); else printf("%lld is not a palindrome.\n",n); return 0; }
