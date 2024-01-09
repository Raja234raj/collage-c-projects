#include <stdio.h>

#define N 3

int main() {
    int A[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[N][N] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};

    int resultAddition[N][N];

    // Addition of matrices
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            resultAddition[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the result of addition
    printf("Matrix Addition:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t", resultAddition[i][j]);
        }
        printf("\n");
    }

    return 0;
}
