#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int rollNo;

    file = fopen("LNMIITSTUDENT.DAT", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter student roll number: ");
    scanf("%d", &rollNo);

    fprintf(file, "Name: %sRoll Number: %d\n", name, rollNo);

    printf("Student information has been added to the file.\n");

    fclose(file);

    return 0;
}
