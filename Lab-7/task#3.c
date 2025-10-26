#include <stdio.h>

int main() {
    int passMarks[10], failMarks[10];
    int mark, passCount = 0, failCount = 0, i;
    float passAvg = 0, failAvg = 0;

    printf("Enter marks for 10 students (enter -1 to exit early):\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if (mark == -1) break;
        if (mark >= 5 && mark <= 10) {
            passMarks[passCount] = mark;
            passAvg += mark;
            passCount++;
        } else if (mark >= 0 && mark <= 5) {
            failMarks[failCount] = mark;
            failAvg += mark;
            failCount++;
        }
    }

    // Display pass marks and average
    printf("Pass Marks: ");
    for (i = 0; i < passCount; i++) {
        printf("%d ", passMarks[i]);
    }
    if (passCount > 0) {
        passAvg /= passCount;
        printf("\nPass Average: %.2f", passAvg);
    } else {
        printf("None");
    }

    // Display fail marks and average
    printf("\nFail Marks: ");
    for (i = 0; i < failCount; i++) {
        printf("%d ", failMarks[i]);
    }
    if (failCount > 0) {
        failAvg /= failCount;
        printf("\nFail Average: %.2f", failAvg);
    } else {
        printf("None");
    }
    printf("\n");

    return 0;
}