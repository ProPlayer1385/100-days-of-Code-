/* Q95: Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>
#define MAX 500
int main(void)
{
    char a[MAX],b[MAX],doubled[2*MAX];
    printf("Enter first string: "); if(fgets(a,sizeof(a),stdin)==NULL)return 1;
    printf("Enter second string: "); if(fgets(b,sizeof(b),stdin)==NULL)return 1;
    a[strcspn(a,"\n")]='\0'; b[strcspn(b,"\n")]='\0';
    if(strlen(a)!=strlen(b)){printf("The strings are not rotations.\n");return 0;}
    snprintf(doubled,sizeof(doubled),"%s%s",a,a);
    printf(strstr(doubled,b)!=NULL ? "The strings are rotations.\n" : "The strings are not rotations.\n");
    return 0;
}
