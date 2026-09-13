#include <stdio.h>
int main(void){long long n,t;int c[10]={0},best=0,m=0;printf("Enter an integer number: ");if(scanf("%lld",&n)!=1)return 1;t=n;if(t<0)t=-t;if(t==0)c[0]=1;while(t){c[t%10]++;t/=10;}for(int d=0;d<10;d++)if(c[d]>m){m=c[d];best=d;}printf("Digit occurring most times = %d\nOccurrences = %d\n",best,m);return 0;}
