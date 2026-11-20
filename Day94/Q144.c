/* Q144: 100 Days of Code solution. */
#include <stdio.h>

#define STUDENTS 5

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student student)
{
    printf("Name: %s\n", student.name);
    printf("Roll No: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
}

int main(void)
{
    struct Student student;
    printf("Enter name, roll number and marks: ");
    if (scanf("%99s %d %f", student.name, &student.roll_no,
              &student.marks) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }
    printStudent(student);
    return 0;
}
