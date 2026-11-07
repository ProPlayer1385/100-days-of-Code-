/* Q125: Append a line to an existing file. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[260], line[1024];
    FILE *file;
    printf("Enter existing filename: ");
    if (scanf("%259s", filename) != 1) return 1;
    file = fopen(filename, "r");
    if (file == NULL) { perror("File does not exist"); return 1; }
    fclose(file);
    getchar(); /* Consume the newline after the filename. */
    printf("Enter a line to append: ");
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;
    file = fopen(filename, "a");
    if (file == NULL) { perror("Cannot append"); return 1; }
    if (fputs(line, file) == EOF) { perror("Write error"); fclose(file); return 1; }
    if (strchr(line, '\n') == NULL) fputc('\n', file);
    if (fclose(file) != 0) { perror("Close error"); return 1; }
    puts("Text appended successfully.");
    return 0;
}
