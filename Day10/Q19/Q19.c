/* Q19: Triangle classification */
#include <stdio.h>
int main(){ float a,b,c; printf("Enter three sides of triangle: "); scanf("%f %f %f",&a,&b,&c); if(a+b<=c||a+c<=b||b+c<=a) printf("Invalid triangle\n"); else if(a==b&&b==c) printf("Equilateral triangle\n"); else if(a==b||b==c||a==c) printf("Isosceles triangle\n"); else printf("Scalene triangle\n"); return 0; }
