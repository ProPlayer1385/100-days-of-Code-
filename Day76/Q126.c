/* Q126: Check whether a file exists and display its contents. */
#include <stdio.h>

int main(void)
{
    char filename[260];
    int ch;
    FILE *file;
    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) return 1;
    file = fopen(filename, "r");
    if (file == NULL) { perror("Cannot open file"); return 1; }
    puts("File contents:");
    while ((ch = fgetc(file)) != EOF) putchar(ch);
    if (ferror(file)) { perror("Read error"); fclose(file); return 1; }
    fclose(file);
    return 0;
}
