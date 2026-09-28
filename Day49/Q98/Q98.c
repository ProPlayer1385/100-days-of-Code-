/* Q98: Print initials of a name with the surname displayed in full. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char name[MAX]; int len=0,lastStart=0;
    printf("Enter a name: "); if(fgets(name,sizeof(name),stdin)==NULL)return 1;
    while(name[len]!='\0'&&name[len]!='\n')len++;
    for(int i=0;i<len;i++) if((i==0||name[i-1]==' '||name[i-1]=='\t')&&name[i]!=' '&&name[i]!='\t') lastStart=i;
    printf("Formatted name: ");
    for(int i=0;i<lastStart;i++) if((i==0||name[i-1]==' '||name[i-1]=='\t')&&name[i]!=' '&&name[i]!='\t') printf("%c. ",name[i]);
    for(int i=lastStart;i<len;i++) putchar(name[i]);
    printf("\n"); return 0;
}
