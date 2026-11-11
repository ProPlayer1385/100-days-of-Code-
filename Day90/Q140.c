/* Q140: Define a struct with enum Gender and print the person's gender. */
#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE = 2,
    OTHER = 3
};

struct Person
{
    char name[100];
    enum Gender gender;
};

int main(void)
{
    struct Person person;
    int choice;

    printf("Enter person's name: ");
    if (fgets(person.name, sizeof(person.name), stdin) == NULL)
        return 1;

    for (int i = 0; person.name[i] != '\0'; i++)
    {
        if (person.name[i] == '\n')
        {
            person.name[i] = '\0';
            break;
        }
    }

    printf("Enter gender (1=Male, 2=Female, 3=Other): ");
    if (scanf("%d", &choice) != 1 || choice < MALE || choice > OTHER)
    {
        printf("Invalid gender selection.\n");
        return 1;
    }

    person.gender = (enum Gender)choice;
    printf("Name: %s\n", person.name);
    switch (person.gender)
    {
        case MALE:   printf("Gender: Male\n");   break;
        case FEMALE: printf("Gender: Female\n"); break;
        case OTHER:  printf("Gender: Other\n");  break;
    }
    return 0;
}
