/* Q128: Count vowels and consonants in a text file. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char filename[260];
    FILE *file;
    int ch;
    long long vowels = 0, consonants = 0;
    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) return 1;
    file = fopen(filename, "r");
    if (file == NULL) { perror("Cannot open file"); return 1; }
    while ((ch = fgetc(file)) != EOF)
    {
        ch = tolower((unsigned char)ch);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(file);
    printf("Vowels: %lld\nConsonants: %lld\n", vowels, consonants);
    return 0;
}
