#include <stdio.h>

int main() {
    int array[3][3][3];  // 3x3x3 3D array
    int i, j, k;
    int layerTotal[3] = {0}; 
    int overallTotal = 0, overallMax = 0, overallMin, count = 0;
    float overallAverage;

    //input element for the 3D array
    printf("Enter 27 elements for the 3x3x3 array (layer by layer):\n");
    for (i = 0; i < 3; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    for (i = 0; i < 3; i++) {
        printf("\nLayer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", array[i][j][k]);
                layerTotal[i] += array[i][j][k];
                overallTotal += array[i][j][k];
                if (array[i][j][k] > overallMax) overallMax = array[i][j][k];
                if (array[i][j][k] < overallMin) overallMin = array[i][j][k];
                count++;
            }
            printf("\n");
        }
        printf("Total for Layer %d: %d\n", i + 1, layerTotal[i]);
    }

    //Final result
    overallAverage = (float)overallTotal / count;
    printf("\nOverall Insights:\n");
    printf("Total Sum: %d\n", overallTotal);
    printf("Average: %.2f\n", overallAverage);
    printf("Maximum: %d\n", overallMax);
    printf("Minimum: %d\n", overallMin);

    return 0;
}
