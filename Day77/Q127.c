/* Q127: Convert input.txt to uppercase in output.txt. */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *input = fopen("input.txt", "r");
    FILE *output;
    int ch;
    if (input == NULL) { perror("Cannot open input.txt"); return 1; }
    output = fopen("output.txt", "w");
    if (output == NULL) { perror("Cannot open output.txt"); fclose(input); return 1; }
    while ((ch = fgetc(input)) != EOF)
    {
        if (fputc(toupper((unsigned char)ch), output) == EOF)
        {
            perror("Write error");
            fclose(input); fclose(output);
            return 1;
        }
    }
    if (ferror(input)) { perror("Read error"); fclose(input); fclose(output); return 1; }
    fclose(input);
    if (fclose(output) != 0) { perror("Close error"); return 1; }
    puts("Uppercase text saved to output.txt.");
    return 0;
}
