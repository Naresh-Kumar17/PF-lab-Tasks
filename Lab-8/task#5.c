#include <stdio.h>

int main() {
    int array[3][3][3];  
    int i, j, k, layer1, layer2;
    int isIdentical;

    // input elements for the 3D array
    printf("Enter 27 elements for the 3x3x3 array (layer by layer):\n");
    for (i = 0; i < 3; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    // Compare each pair of layers
    printf("\nLayer Similarity Report:\n");
    for (layer1 = 0; layer1 < 3; layer1++) {
        for (layer2 = layer1 + 1; layer2 < 3; layer2++) {
            isIdentical = 1;  // Assume identical
            for (j = 0; j < 3; j++) {
                for (k = 0; k < 3; k++) {
                    if (array[layer1][j][k] != array[layer2][j][k]) {
                        isIdentical = 0;
                        break;
                    }
                }
                if (!isIdentical) break;
            }
            printf("Layer %d and Layer %d: ", layer1 + 1, layer2 + 1);
            if (isIdentical) {
                printf("Identical\n");
            } else {
                printf("Distinct\n");
            }
        }
    }

    return 0;
}
