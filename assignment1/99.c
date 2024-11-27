#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowelCount = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the file: %d\n", vowelCount);

    fclose(file);

    return 0;
}
