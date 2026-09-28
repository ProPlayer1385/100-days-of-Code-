/* Q99: Change date format from dd/mm/yyyy to dd-Mon-yyyy. */
#include <stdio.h>
int main(void)
{
    int day,month,year;
    const char *months[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date (dd/mm/yyyy): ");
    if(scanf("%d/%d/%d",&day,&month,&year)!=3||month<1||month>12||day<1||day>31){printf("Invalid date.\n");return 1;}
    printf("%02d-%s-%04d\n",day,months[month],year);
    return 0;
}
