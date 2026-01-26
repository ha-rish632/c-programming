#include <stdio.h>

int main()
{
    char op;
    int num1, num2;

    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", (double) num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
