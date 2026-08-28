/* Q38: LCM */
#include <stdio.h>
int main(){ long long a,b,x,y,gcd,lcm; printf("Enter two integers: "); scanf("%lld %lld",&a,&b); x=a<0?-a:a;y=b<0?-b:b; long long p=x*y; while(y!=0){long long t=x%y;x=y;y=t;} gcd=x; lcm=gcd? p/gcd:0; printf("LCM = %lld\n",lcm); return 0; }
