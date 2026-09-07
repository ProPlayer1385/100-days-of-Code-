/* Solution for website Q50 */
#include <stdio.h>
int main(void){for(int i=5;i>=1;i--){for(int s=0;s<5-i;s++)printf(" ");for(int j=1;j<=i;j++)printf("*");printf("\n");}return 0;}
