/* Q24: Electricity bill */
#include <stdio.h>
int main(){ int u; float bill; printf("Enter electricity units: "); scanf("%d",&u); if(u<0){printf("Invalid units\n");return 0;} if(u<=100) bill=u*5; else if(u<=200) bill=100*5+(u-100)*7; else bill=100*5+100*7+(u-200)*10; printf("Electricity bill = Rs %.2f\n",bill); return 0; }
