#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB, i, j, k;
    float matrixA[3][3], matrixB[3][3], result[3][3];

   
    printf("Enter rows and columns for matrix A (up to 3x3): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter rows and columns for matrix B (up to 3x3): ");
    scanf("%d %d", &rowsB, &colsB);

    // check cols and rows for multiplication condition
    if (colsA != rowsB) {
        printf("Columns of matrix A must equal rows of matrix B for multiplication.\n");
        return 1;
    }

    // matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsA; j++) {
            scanf("%f", &matrixA[i][j]);
        }
    }

    //  matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rowsB; i++) {
        for (j = 0; j < colsB; j++) {
            scanf("%f", &matrixB[i][j]);
        }
    }

    // zero matrix 
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplication of two matrices
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            for (k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsA; j++) {
            printf("%.2f ", matrixA[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < rowsB; i++) {
        for (j = 0; j < colsB; j++) {
            printf("%.2f ", matrixB[i][j]);
        }
        printf("\n");
    }

    // Print result matrix
    printf("\nResult Matrix (A * B):\n");
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < colsB; j++) {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
