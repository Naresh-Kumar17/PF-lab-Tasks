#include <stdio.h>

int main() {
    int n;
    int i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid: Number of rows must be positive.\n");
        return 1;
    }
    
    if (n >= 1) {
        printf("1\n");
    }
    if (n >= 2) {
        printf("1 1\n");
        long long prev_second_last = 1;
        long long prev_last = 1;
        for (i = 3; i <= n; i++) {
            long long num1 = prev_second_last + prev_last;
            printf("%lld ", num1);
            
            long long num2 = num1 + prev_last;
            printf("%lld ", num2);
            
            long long curr_second_last = num1;
            long long curr_last = num2;
            
            for (j = 3; j <= i; j++) {
                long long numj = curr_last + curr_second_last;
                printf("%lld ", numj);
                curr_second_last = curr_last;
                curr_last = numj;
            }
            
            printf("\n");
            
            prev_second_last = curr_second_last;
            prev_last = curr_last;
        }
    }
    
    return 0;
}