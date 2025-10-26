#include <stdio.h>

int main() {
    int matrix[3][3]={ {1, 23, 3}, {4, 63, 6}, {7, 33, 9} }; // i take these sample because of every time checks
    int i, j, k, l;
    
    // Input the 3x3 matrix
    // printf("Enter the elements of the 3x3 matrix\n");
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         scanf("%f", &matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //Original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    //Transpose Matrix
    int trans[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    
    //determinant
    float det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
              - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
              + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    printf("\nDeterminant of the Matrix: %.2f\n", det);
    
    //  cofactor matrix
    float cof[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // minor matrix (2x2)
            float minor_mat[2][2];
            int row = 0;
            for (k = 0; k < 3; k++) {
                if (k != i) {
                    int col = 0;
                    for (l = 0; l < 3; l++) {
                        if (l != j) {
                            minor_mat[row][col] = matrix[k][l];
                            col++;
                        }
                    }
                    row++;
                }
            }
            // Determinant of minor
            float det_minor = minor_mat[0][0] * minor_mat[1][1] - minor_mat[0][1] * minor_mat[1][0];
            // Cofactor
            cof[i][j] = ((i + j) % 2 == 0 ? 1 : -1) * det_minor;
        }
    }
    printf("\nCofactor Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", cof[i][j]);
        }
        printf("\n");
    }
    
    // adjoint matrix
    float adj[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            adj[j][i] = cof[i][j];
        }
    }
    printf("\nAdjoint Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", adj[i][j]);
        }
        printf("\n");
    }
    
    // inverse if determinant is not zero
    if (det != 0) {
        float inv[3][3];
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                inv[i][j] = adj[i][j] / det;
            }
        }
        printf("\nInverse Matrix:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f ", inv[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nThe matrix is not invertible because determinant is zero.\n");
    }
    
    return 0;
}
