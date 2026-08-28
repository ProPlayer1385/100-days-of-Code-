/* Q20: Day of week */
#include <stdio.h>
int main(){ int d; printf("Enter day number (1-7): "); scanf("%d",&d); switch(d){case 1:puts("Monday");break;case 2:puts("Tuesday");break;case 3:puts("Wednesday");break;case 4:puts("Thursday");break;case 5:puts("Friday");break;case 6:puts("Saturday");break;case 7:puts("Sunday");break;default:puts("Invalid day");} return 0; }
