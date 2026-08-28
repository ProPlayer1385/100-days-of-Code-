/* Q31: Decimal to binary */
#include <stdio.h>
int main(){ unsigned int n; int bits[32],i=0; printf("Enter a non-negative integer: "); scanf("%u",&n); if(n==0){printf("Binary = 0\n");return 0;} while(n>0){bits[i++]=n%2;n/=2;} printf("Binary = "); while(i>0)printf("%d",bits[--i]); printf("\n"); return 0; }
