#include <stdio.h>

int main() {
    int arr[10];
    int i, j;

    // take 10 integers
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // replace  duplicates with -1
    for (i = 0; i < 10; i++) {
        if (arr[i] != -1) {
            for (j = i + 1; j < 10; j++) {
                if (arr[j] == arr[i]) {
                    arr[j] = -1;
                }
            }
        }
    }


    printf("Updated array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}