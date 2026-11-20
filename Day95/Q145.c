/* Q145: 100 Days of Code solution. */
#include <stdio.h>

#define STUDENTS 5

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

struct Student findTopStudent(const struct Student students[], int count)
{
    struct Student top = students[0];
    for (int i = 1; i < count; i++)
    {
        if (students[i].marks > top.marks)
        {
            top = students[i];
        }
    }
    return top;
}

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

    struct Student top = findTopStudent(students, STUDENTS);
    printf("Top student details:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n",
           top.name, top.roll_no, top.marks);
    return 0;
}
