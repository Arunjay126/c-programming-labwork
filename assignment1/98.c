#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix1, **matrix2, **result;
    int i, j, k;
    int rows1, cols1, rows2, cols2;

    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns of matrix 1 must be equal to number of rows of matrix 2.\n");
        return 1;
    }

    matrix1 = (int **)malloc(rows1 * sizeof(int *));
    matrix2 = (int **)malloc(rows2 * sizeof(int *));
    result = (int **)malloc(rows1 * sizeof(int *));
    
    for (i = 0; i < rows1; i++) {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
    }
    
    for (i = 0; i < rows2; i++) {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    }
    
    for (i = 0; i < rows1; i++) {
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    for (i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    for (i = 0; i < rows1; i++) {
        free(result[i]);
    }

    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
