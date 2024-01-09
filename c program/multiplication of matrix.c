#include <stdio.h>

#define N 3

int main() {
    int A[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[N][N] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};

    int resultMultiplication[N][N];

    // Multiplication of matrices
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            resultMultiplication[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                resultMultiplication[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result of multiplication
    printf("Matrix Multiplication:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t", resultMultiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}
