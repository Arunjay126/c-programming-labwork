#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int jars[N];
    for (int i = 0; i < N; i++) {
        jars[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        for (int j = a - 1; j < b; j++) {
            jars[j] += k;
        }
    }

    int totalCandies = 0;
    for (int i = 0; i < N; i++) {
        totalCandies += jars[i];
    }

    int average = totalCandies / N;
    printf("%d\n", average);

    return 0;
}
