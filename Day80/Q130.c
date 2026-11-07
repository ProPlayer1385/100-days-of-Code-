/* Q130: Write student records with fprintf and read with fscanf. */
#include <stdio.h>

int main(void)
{
    int count, roll;
    char name[100];
    double marks;
    FILE *file;
    printf("Enter number of students: ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100) return 1;
    file = fopen("students.txt", "w");
    if (file == NULL) { perror("Cannot create students.txt"); return 1; }
    for (int i = 0; i < count; i++)
    {
        printf("Student %d - enter name (one word), roll number, marks: ", i + 1);
        if (scanf("%99s %d %lf", name, &roll, &marks) != 3)
        {
            fclose(file);
            return 1;
        }
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);
    file = fopen("students.txt", "r");
    if (file == NULL) { perror("Cannot read students.txt"); return 1; }
    puts("Saved student records:");
    while (fscanf(file, "%99s %d %lf", name, &roll, &marks) == 3)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    fclose(file);
    return 0;
}
