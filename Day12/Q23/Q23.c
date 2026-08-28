/* Q23: Library fine */
#include <stdio.h>
int main(){ int d; float fine; printf("Enter number of late days: "); scanf("%d",&d); if(d<=0) fine=0; else if(d<=5) fine=d*2; else if(d<=10) fine=5*2+(d-5)*4; else fine=5*2+5*4+(d-10)*6; printf("Library fine = Rs %.2f\n",fine); return 0; }
