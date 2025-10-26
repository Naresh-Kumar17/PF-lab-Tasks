#include <stdio.h>

int main() {
    int rows, cols, i, j, k, l;
    float matrix[5][5], matrix2[5][5];  // For two matrices if needed
    int isSquare = 0, isRect = 0, isZero = 1, isIdentity = 1, isDiagonal = 1, isScalar = 1;
    int isUpperTri = 1, isLowerTri = 1, isSymmetric = 1, isSkewSym = 1, isSingular = 0, isEqual = 1;
    int isRow = 0, isColumn = 0, isNull = 1, isIdempotent = 1, isNilpotent = 1;
    float determinant = 0, value = 0;

    // Read dimensions
    printf("Enter rows and columns (up to 5): ");
    scanf("%d %d", &rows, &cols);

    // Read first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Read second matrix for equality check
    printf("Enter elements of second matrix for equality check:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%f", &matrix2[i][j]);
        }
    }

    // Check basic types
    if (rows == cols) {
        isSquare = 1;
        isRect = 0;
    } else {
        isSquare = 0;
        isRect = 1;
    }

    if (rows == 1) isRow = 1;
    if (cols == 1) isColumn = 1;

    // Check zero/null
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                isZero = 0;
                isNull = 0;
            }
        }
    }

    // Check equality
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix2[i][j]) {
                isEqual = 0;
            }
        }
    }

    // For square matrices only
    if (isSquare) {
        // Get value for scalar (first diagonal)
        value = matrix[0][0];

        // Check identity, diagonal, scalar, triangular, symmetric, skew-symmetric
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (i == j) {
                    if (matrix[i][j] != 1) isIdentity = 0;
                    if (matrix[i][j] != value) isScalar = 0;
                    if (matrix[i][j] != 0) isSkewSym = 0;  // Diagonal must be 0 for skew-symmetric
                } else {
                    if (matrix[i][j] != 0) {
                        isIdentity = 0;
                        isDiagonal = 0;
                        isScalar = 0;
                    }
                    if (i < j && matrix[i][j] != 0) isLowerTri = 0;
                    if (i > j && matrix[i][j] != 0) isUpperTri = 0;
                }
                if (matrix[i][j] != matrix[j][i]) isSymmetric = 0;
                if (matrix[i][j] != -matrix[j][i]) isSkewSym = 0;
            }
        }

        // Determinant for singular/non-singular
        if (rows == 2) {
            determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        } else if (rows == 3) {
            determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        }
        if (determinant == 0) isSingular = 1;  // Singular if determinant == 0

        // Idempotent: A * A == A
        float prod[5][5] = {0};
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                for (k = 0; k < cols; k++) {
                    prod[i][j] += matrix[i][k] * matrix[k][j];
                }
                if (prod[i][j] != matrix[i][j]) isIdempotent = 0;
            }
        }

        // Nilpotent: A^2 == 0 
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (prod[i][j] != 0) isNilpotent = 0;
            }
        }
    }

    // Display results
    printf("Matrix types:\n");
    if (isSquare) printf("Square Matrix\n");
    if (isRect) printf("Rectangular Matrix\n");
    if (isZero) printf("Zero Matrix\n");
    if (isIdentity) printf("Identity Matrix\n");
    if (isDiagonal) printf("Diagonal Matrix\n");
    if (isScalar) printf("Scalar Matrix\n");
    if (isUpperTri) printf("Upper Triangular Matrix\n");
    if (isLowerTri) printf("Lower Triangular Matrix\n");
    if (isSymmetric) printf("Symmetric Matrix\n");
    if (isSkewSym) printf("Skew-Symmetric Matrix\n");
    if (isSingular) printf(" Singular\n"); else if (isSquare) printf("11. Non-Singular\n");
    if (isEqual) printf(" Equal Matrix\n");
    if (isRow) printf(" Row Matrix\n");
    if (isColumn) printf(" Column Matrix\n");
    if (isNull) printf(" Null Matrix\n");
    if (isIdempotent) printf("16. Idempotent Matrix\n");
    if (isNilpotent) printf("17. Nilpotent Matrix\n");

    return 0;
}
