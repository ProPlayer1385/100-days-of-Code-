/* Q141: Read and print one student's name, roll number, and marks. */
#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

int main(void)
{
    struct Student student;

    printf("Enter student's name: ");
    if (fgets(student.name, sizeof(student.name), stdin) == NULL)
        return 1;

    for (int i = 0; student.name[i] != '\0'; i++)
    {
        if (student.name[i] == '\n')
        {
            student.name[i] = '\0';
            break;
        }
    }

    printf("Enter roll number: ");
    if (scanf("%d", &student.roll_no) != 1)
        return 1;

    printf("Enter marks: ");
    if (scanf("%f", &student.marks) != 1)
        return 1;

    printf("\nStudent details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}
