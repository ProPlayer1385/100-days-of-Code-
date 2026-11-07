/* Q136: Enum menu choices and switch arithmetic. */
#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main(void)
{
    int choice;
    double first, second;
    puts("1. ADD\n2. SUBTRACT\n3. MULTIPLY");
    printf("Enter choice: ");
    if (scanf("%d", &choice) != 1) return 1;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) return 1;
    switch ((enum Operation)choice)
    {
        case ADD: printf("Result: %.2f\n", first + second); break;
        case SUBTRACT: printf("Result: %.2f\n", first - second); break;
        case MULTIPLY: printf("Result: %.2f\n", first * second); break;
        default: puts("Invalid menu choice."); return 1;
    }
    return 0;
}
