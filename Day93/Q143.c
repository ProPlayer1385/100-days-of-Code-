/* Q143: 100 Days of Code solution. */
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
    int topIndex = 0;

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

    for (int i = 1; i < STUDENTS; i++)
    {
        if (students[i].marks > students[topIndex].marks)
        {
            topIndex = i;
        }
    }

    printf("Highest marks student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n",
           students[topIndex].name, students[topIndex].roll_no,
           students[topIndex].marks);
    return 0;
}
