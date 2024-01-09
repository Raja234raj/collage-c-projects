#include <stdio.h>

#define N 3

int main() {
    int A[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int resultTranspose[N][N];

    // Transpose of matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            resultTranspose[i][j] = A[j][i];
        }
    }

    // Display the result of transpose
    printf("Transpose of Matrix:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t", resultTranspose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
