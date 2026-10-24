/* Q122: Website exercise solution. */
#include <stdio.h>
int main(void) {
    FILE *file;
    char line[1024];
    file=fopen("info.txt","r");
    if(file==NULL) {perror("Unable to open info.txt");return 1;}
    while(fgets(line,sizeof(line),file)!=NULL) printf("%s",line);
    if(ferror(file)) {perror("Error reading info.txt");fclose(file);return 1;}
    fclose(file);
    return 0;
}
