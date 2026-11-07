/* Q123: Count characters, words and lines in a text file. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char filename[260];
    FILE *file;
    int ch, previous = '\n', inWord = 0;
    long long characters = 0, words = 0, lines = 0;

    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) return 1;
    file = fopen(filename, "r");
    if (file == NULL) { perror("Cannot open file"); return 1; }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) inWord = 0;
        else if (!inWord) { words++; inWord = 1; }
        previous = ch;
    }
    if (characters > 0 && previous != '\n') lines++;
    fclose(file);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", characters, words, lines);
    return 0;
}
