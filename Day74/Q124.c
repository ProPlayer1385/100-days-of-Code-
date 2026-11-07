/* Q124: Copy a file using fgetc() and fputc(). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sourceName[260], destinationName[260];
    FILE *source, *destination;
    int ch;

    printf("Enter source filename: ");
    if (scanf("%259s", sourceName) != 1) return 1;
    printf("Enter destination filename: ");
    if (scanf("%259s", destinationName) != 1) return 1;
    if (strcmp(sourceName, destinationName) == 0)
    {
        puts("Source and destination must be different.");
        return 1;
    }
    source = fopen(sourceName, "rb");
    if (source == NULL) { perror("Cannot open source"); return 1; }
    destination = fopen(destinationName, "wb");
    if (destination == NULL)
    {
        perror("Cannot open destination");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        if (fputc(ch, destination) == EOF)
        {
            perror("Error writing destination");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }
    if (ferror(source)) { perror("Error reading source"); fclose(source); fclose(destination); return 1; }
    fclose(source);
    if (fclose(destination) != 0) { perror("Error closing destination"); return 1; }
    puts("File copied successfully.");
    return 0;
}
