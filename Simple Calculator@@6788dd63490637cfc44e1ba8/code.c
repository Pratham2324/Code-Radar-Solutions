#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c is used to avoid the newline character
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
