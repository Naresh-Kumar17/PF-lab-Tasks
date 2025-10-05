#include <stdio.h>

int main() {
    long long number, original, abs_num;
    int digit;
    int digits = 0; 
    
    printf("Enter a number: ");
    scanf("%lld", &number);
    original = number;
    abs_num = (original > 0 ? original : -original);
 
    long long temp = abs_num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    if (original == 0) digits = 1;
    int i,k;
   
    for ( i = 1; i <= digits; i++) {
        long long power = 1;  
        for ( k = 1; k <= (digits - i); k++) {
            power *= 10;
        }
        digit = (abs_num / power) % 10; 
        
        printf("On %d position digit is %d\n",i, digit);
    
    }
    
    return 0;
}