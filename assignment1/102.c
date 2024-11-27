#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;  
    file = fopen("input.txt", "r");  
    
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (isspace(ch) || ch == '\n') {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {  
        wordCount++;
    }

    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    fclose(file);  

    return 0;
}
