#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; 
    rotateArray(arr, n, k);
    printArray(arr, n);
    return 0;
}
