#include <stdio.h>

int main() {
    int a, b;
    char c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose an operator (+, -, /, *, %%): ");
    scanf(" %c", &c);  // Note the space before %c

    switch (c) {
        case '+':
            printf("The sum of %d and %d is %d.\n", a, b, a + b);
            break;
        case '-':
            printf("Subtracting %d from %d gives us %d.\n", b, a, a - b);
            break;
        case '*':
            printf("Multiplying %d and %d results in %d.\n", a, b, a * b);
            break;
        case '/':
            printf("Dividing %d by %d yields %d.\n", a, b, a / b);
            break;
        default:
            printf("Oops! Invalid operator. Please choose +, -, /, or *.\n");
    }

    return 0;
}
