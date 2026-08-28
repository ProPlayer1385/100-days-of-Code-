/* Q27: Sum of first n odd numbers */
#include <stdio.h>
int main(){ int n,sum=0; printf("Enter number of odd terms: "); scanf("%d",&n); for(int i=1,c=0;c<n;i+=2,c++) sum+=i; printf("Sum of first %d odd numbers = %d\n",n,sum); return 0; }
