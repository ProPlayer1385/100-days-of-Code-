/* Q121: Website exercise solution. */
#include <stdio.h>
#include <string.h>
int main(void) {
    char name[256];
    int age;
    FILE *file;
    printf("Enter your name: ");
    if(fgets(name,sizeof(name),stdin)==NULL) return 1;
    name[strcspn(name,"\n")]='\0';
    printf("Enter your age: ");
    if(scanf("%d",&age)!=1) return 1;
    file=fopen("info.txt","w");
    if(file==NULL) {perror("Unable to create info.txt");return 1;}
    fprintf(file,"Name: %s\nAge: %d\n",name,age);
    if(fclose(file)!=0) {perror("Unable to save info.txt");return 1;}
    puts("Data successfully saved to info.txt.");
    return 0;
}
