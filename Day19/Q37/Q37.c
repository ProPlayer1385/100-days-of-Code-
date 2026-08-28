/* Q37: GCD/HCF */
#include <stdio.h>
int main(){ long long a,b,x,y; printf("Enter two integers: "); scanf("%lld %lld",&a,&b); x=a<0?-a:a; y=b<0?-b:b; while(y!=0){long long t=x%y;x=y;y=t;} printf("GCD (HCF) = %lld\n",x); return 0; }
