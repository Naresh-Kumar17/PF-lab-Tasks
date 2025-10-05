#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the Value of a: ");
    if(scanf("%d", &a) != 1){
        printf("Invalid Value of A\n");
        return 0;
    }
    printf("Enter the Value of b: ");
    if(scanf("%d", &b) != 1){
        printf("Invalid Value of B\n");
        return 0;
    }
    printf("Enter the Value of c: ");
    if(scanf("%d", &c) != 1){
        printf("Invalid Value of C\n");
        return 0;
    }
    if(a > b && a > c){
        printf("The value of a is largest.\n");
    } else if(b > a && b > c){
        printf("The value of b is largest.\n");
    } else if(c > a && c > b){
        printf("The value of c is largest.\n");
    } else if(a == b && a > c){
        printf("The value of a and b are equal and largest.\n");
    } else if(b == c && b > a){
        printf("The value of b and c are equal and largest.\n");
    } else if(a == c && a > b){
        printf("The value of a and c are equal and largest.\n");
    } else {
        printf("All numbers have same value.\n");
    }
    return 0;
}

