/* Q142: 100 Days of Code solution. */
#include <stdio.h>

#define STUDENTS 5

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

int main(void)
{
    struct Student students[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        if (scanf("%99s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("\nStudent details:\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}
