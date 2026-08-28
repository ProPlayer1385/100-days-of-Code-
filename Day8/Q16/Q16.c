/* Q16: Largest of three numbers */
#include <stdio.h>
int main(){ float a,b,c,max; printf("Enter three numbers: "); scanf("%f %f %f",&a,&b,&c); max=a; if(b>max) max=b; if(c>max) max=c; printf("Largest = %.2f\n",max); return 0; }
