#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char rocks[N][101];
    for (int i = 0; i < N; i++) {
        scanf("%s", rocks[i]);
    }

    int gem_elements = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        int is_gem = 1;
        for (int i = 0; i < N; i++) {
            if (strchr(rocks[i], ch) == NULL) {
                is_gem = 0;
                break;
            }
        }
        if (is_gem) {
            gem_elements++;
        }
    }

    printf("%d\n", gem_elements);
    return 0;
}
