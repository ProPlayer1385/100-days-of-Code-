/* Q146: 100 Days of Code solution. */
/* Q146: Employee structure with a nested Date structure. */
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[100];
    int employee_id;
    struct Date joining_date;
};

int main(void)
{
    struct Employee employee;
    printf("Enter employee name and ID: ");
    if (scanf("%99s %d", employee.name, &employee.employee_id) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter joining date (day month year): ");
    if (scanf("%d %d %d", &employee.joining_date.day,
              &employee.joining_date.month,
              &employee.joining_date.year) != 3)
    {
        printf("Invalid date input.\n");
        return 1;
    }

    printf("Employee details:\n");
    printf("Name: %s\nID: %d\n",
           employee.name, employee.employee_id);
    printf("Joining Date: %02d/%02d/%04d\n",
           employee.joining_date.day,
           employee.joining_date.month,
           employee.joining_date.year);
    return 0;
}
