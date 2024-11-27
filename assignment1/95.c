#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empNumber;
    char empName[100];
    float basicPay;
};

int main() {
    struct Employee *employ;
    int N, i;

    employ = (struct Employee *)malloc(50 * sizeof(struct Employee));

    if (employ == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employ[i].empNumber);
        printf("Employee Name: ");
        getchar();
        fgets(employ[i].empName, sizeof(employ[i].empName), stdin);
        printf("Basic Pay: ");
        scanf("%f", &employ[i].basicPay);
    }

    printf("\nEmployee Details:\n");
    printf("Employee Number\tEmployee Name\tBasic Pay\n");
    for (i = 0; i < N; i++) {
        printf("%d\t\t%s\t%.2f\n", employ[i].empNumber, employ[i].empName, employ[i].basicPay);
    }

    free(employ);
    return 0;
}
