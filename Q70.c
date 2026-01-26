#include <stdio.h>

int main()
{
    int a;
    int b;
    char op;

    scanf("%d %d", &a, &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);  

    switch (op)
    {
        case '+':
            printf("Sum: %d\n", a + b);
            break;
        case '-':
            printf("Difference: %d\n", a - b);
            break;
        case '*':
            printf("Product: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Quotient: %.2f\n", (double) a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid input!\n");
            break;
    }

    return 0;
}
