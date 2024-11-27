#include <stdio.h>

struct Student {
    int rollNo;
    char name[100];
    float totalMarks;
};

int main() {
    FILE *file;
    int N, i;

    printf("Enter number of students: ");
    scanf("%d", &N);

    struct Student students[N];

    file = fopen("LNMIITSTUDENT.JAVA", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter total marks: ");
        scanf("%f", &students[i].totalMarks);

        fprintf(file, "Roll Number: %d\n", students[i].rollNo);
        fprintf(file, "Name: %s", students[i].name);
        fprintf(file, "Total Marks: %.2f\n\n", students[i].totalMarks);
    }

    fclose(file);

    printf("Student details have been written to the file.\n");

    return 0;
}
