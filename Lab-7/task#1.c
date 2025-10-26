#include <stdio.h>

int main() {
    int arr[5];
    int i, temp;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[4];  // Last element
    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    printf("Output: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}