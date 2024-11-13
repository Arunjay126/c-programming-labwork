#include <stdio.h>
#include <string.h>
int leng(char* str) {
    int length = strlen(str);
    printf(" %d", length);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    leng(str);
}
