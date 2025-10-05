#include <stdio.h>
int main() {
    int n; 
    int i, j; 
    printf("Enter the number of rows positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid: Number of rows must be positive.\n");
        return 1; 
    }
    for (i = 1; i <= n; i++) {  
        for (j = 1; j <= i; j++) {
            printf("%d", j); 
        } 
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);  
        }
        printf("\n");
    }
    return 0;
}