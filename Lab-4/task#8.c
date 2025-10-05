#include <stdio.h>
#include <math.h> // For power function

int main() {
    int NumberOne, NumberTwo, number;

    printf("-------------------X-------------------\n");
    printf("         Simple Calculator\n");
    printf("-------------------X-------------------\n");

    printf("Enter a Number: ");
    scanf("%d", &NumberOne);

    printf("Enter Another Number: ");
    scanf("%d", &NumberTwo);

    printf("For Addition enter 1\n");
    printf("For Subtraction enter 2\n");
    printf("For Multiplication enter 3\n");
    printf("For Division enter 4\n");
    printf("For Modulus enter 5\n");
    printf("For Power (Number One raised to Number Two) enter 6\n");
    printf("Enter Number of Operation: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("The Sum of Number One and Number Two = %d\n", NumberOne + NumberTwo);
            break;
        case 2:
            printf("The Difference of Number One and Number Two = %d\n", NumberOne - NumberTwo);
            break;
        case 3:
            printf("The Product of Number One and Number Two = %d\n", NumberOne * NumberTwo);
            break;
        case 4:
            if (NumberTwo == 0) {
                printf("Division by Zero is not possible\n");
            } else {
                printf("The Division of Number One by Number Two = %.2f\n", (float)NumberOne / NumberTwo);
            }
            break;
        case 5:
            if (NumberTwo == 0) {
                printf("Modulus by Zero is not allowed\n");
            } else {
                printf("The Modulus of Number One and Number Two = %d\n", NumberOne % NumberTwo);
            }
            break;
        case 6:
            printf("Number One raised to the Power of Number Two = %.2f\n", pow(NumberOne, NumberTwo));
            break;
        default:
            printf("You entered an invalid Number\n");
            break;
    }

    return 0;
}

