/* Q33: Armstrong number */
#include <stdio.h>
int main(){ int n,x,digits=0,temp; long long sum=0; printf("Enter a non-negative integer: "); scanf("%d",&n); if(n<0){printf("Please enter a non-negative integer.\n");return 0;} temp=n; do{digits++;temp/=10;}while(temp); temp=n; do{int d=temp%10; long long p=1; for(int i=0;i<digits;i++)p*=d; sum+=p; temp/=10;}while(temp); if(sum==n) printf("%d is an Armstrong number.\n",n); else printf("%d is not an Armstrong number.\n",n); return 0; }
