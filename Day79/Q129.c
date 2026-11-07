/* Q129: Read numbers.txt and print the sum and average. */
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("numbers.txt", "r");
    long long sum = 0, count = 0;
    int number;
    if (file == NULL) { perror("Cannot open numbers.txt"); return 1; }
    while (fscanf(file, "%d", &number) == 1)
    {
        sum += number;
        count++;
    }
    if (!feof(file)) { puts("Invalid number in file."); fclose(file); return 1; }
    fclose(file);
    if (count == 0) { puts("File contains no integers."); return 0; }
    printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum / count);
    return 0;
}
