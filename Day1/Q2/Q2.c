/* Q2: Arithmetic operations on two numbers */
#include <stdio.h>
int main(){ double a,b; printf("Enter two numbers: "); scanf("%lf %lf",&a,&b); printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n",a+b,a-b,a*b); if(b!=0) printf("Quotient = %.2f\n",a/b); else printf("Quotient = undefined (division by zero)\n"); return 0; }
