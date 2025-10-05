#include <stdio.h>
int main() {
    int NumberOne, NumberTwo, operation;

    printf("Enter a Number: ");
    scanf("%d", &NumberOne);

    printf("Enter Another Number: ");
    scanf("%d", &NumberTwo);

    printf("\nChoose your operation:\n");
    printf("For Addition press 1\n");
    printf("For Subtraction press 2\n");
    printf("For Multiplication press 3\n");
    printf("For Division press 4\n");
    printf("Enter Number of Operation: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            printf("The Sum of Number One and Number Two is: %d\n", NumberOne + NumberTwo);
            break;
        case 2:
            printf("The Difference between Number One and Number Two is: %d\n", NumberOne - NumberTwo);
            break;
        case 3:
            printf("The Product of Number One and Number Two is: %d\n", NumberOne * NumberTwo);
            break;
        case 4:
            if (NumberTwo == 0) {
                printf("Division by Zero is not possible.\n");
            } else {
                printf("The Division of Number One by Number Two is: %d\n", NumberOne / NumberTwo);
            }
            break;
        
        default:
            printf("You entered an invalid operation number.\n");
    }

    return 0;
}

