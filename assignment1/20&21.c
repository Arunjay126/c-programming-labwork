#include <stdio.h>
int main() {
    int a, b;
    char c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Choose an operator (+, -, /, *, %%) ");
    scanf("%c", &c);
    switch (c) {
        case '+':
            printf("The sum is %d\n",a + b);
            break;
        case '-':
            printf("the substraction is %d.\n",a - b);
            break;
        case '*':
            printf("the multiplication is %d\n",a * b);
            break;
        case '/':
            printf("Division is %d",a / b);
            break;
        default:
            printf("ENTER CORRECT OPERATOR");
    }
}
