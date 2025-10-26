#include <stdio.h>

int main() {
    int arr[10];
    int i, target, count = 0;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &target);

    for (i = 0; i < 10; i++) {
        if (arr[i] == target
) {
            count++;
        }
    }

    if (count > 0) {
        printf("Number %d occurred %d times.\n", target, count);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}