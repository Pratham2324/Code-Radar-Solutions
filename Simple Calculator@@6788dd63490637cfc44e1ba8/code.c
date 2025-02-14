#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    scanf("%c\n", &operator);

    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf(" %d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d", num1 / num2);
            } else {
                printf("error");
            }
            break;
        default:
            printf("error");
    }

    return 0;
}


