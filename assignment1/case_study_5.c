#include <stdio.h>

int isFibo(int N) {
    int a = 0, b = 1;
    while (b < N) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b == N;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        if (isFibo(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }
    return 0;
}
