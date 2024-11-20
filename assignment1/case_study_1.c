#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char str[], int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}
int findNextLexicographic(char str[]) {
    int len = strlen(str);
    int i = len - 2;
    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }
    if (i == -1) {
        return 0;
    }
    int j = len - 1;
    while (str[j] <= str[i]) {
        j--;
    }
    swap(&str[i], &str[j]);
    reverse(str, i + 1, len - 1);

    return 1;
}
int main() {
    char str[25];
    printf("enter the word: ");
    scanf("%s",&str);
    if (findNextLexicographic(str)) {
        printf("%s\n", str);
    } else {
        printf("Not possible\n");
    }

    return 0;
}
