/* Q97: Print the initials of a name. */
#include <stdio.h>
#define MAX 500
int main(void)
{
    char name[MAX]; int newWord=1;
    printf("Enter a name: "); if(fgets(name,sizeof(name),stdin)==NULL)return 1;
    printf("Initials: ");
    for(int i=0;name[i]!='\0'&&name[i]!='\n';i++)
    {
        if(name[i]==' '||name[i]=='\t') newWord=1;
        else if(newWord){printf("%c",name[i]);newWord=0;}
    }
    printf("\n"); return 0;
}
