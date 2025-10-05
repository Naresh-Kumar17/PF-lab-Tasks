#include <stdio.h>
int main() {
    long long number, original;  
    int digits = 0;
    long long sum = 0;
    int digit;
    long long temp;
    long long power_value; 
    printf("\nCheck Armstrong Number\n\n");
    printf("\nEnter a non-negative integer:");
    scanf("%lld", &number); 
    if (number < 0) {
        printf("\nInvalid: Negative numbers are not Armstrong numbers.\n");
        return 1;  
    }
    if (number == 0) {
        printf("0 is not considered an Armstrong number.\n");
        return 0;
    }
    temp = number;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = number;
    while (temp > 0) {
        digit = temp % 10; 
        power_value = 1;
        for (int i = 1; i <= digits; i++) {
            power_value *= digit;  
        } 
        sum += power_value;  
        temp /= 10;
    }
    if (sum == original) {
        printf("Yes, %lld is an Armstrong number!\n", original);
    } else {
        printf("No, %lld is not an Armstrong number.\n", original);
    }
    return 0;
}
