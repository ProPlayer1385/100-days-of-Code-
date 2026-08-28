/* Q22: Profit/loss percentage */
#include <stdio.h>
int main(){ float cp,sp; printf("Enter cost price and selling price: "); scanf("%f %f",&cp,&sp); if(cp<=0){printf("Invalid cost price\n");return 0;} if(sp>cp) printf("Profit = %.2f%%\n",(sp-cp)*100/cp); else if(sp<cp) printf("Loss = %.2f%%\n",(cp-sp)*100/cp); else printf("No profit, no loss\n"); return 0; }
