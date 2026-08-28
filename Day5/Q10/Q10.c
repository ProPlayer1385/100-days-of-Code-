/* Q10: Seconds to HH:MM:SS */
#include <stdio.h>
int main(){ int s,h,m; printf("Enter time in seconds: "); scanf("%d",&s); h=s/3600; m=(s%3600)/60; s%=60; printf("Time = %02d:%02d:%02d\n",h,m,s); return 0; }
