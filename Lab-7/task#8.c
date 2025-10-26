#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter non-alphabetic characters: ");
    scanf("%[^A-Za-z]", str);

    printf("Non-alphabetic characters: %s\n", str);

    return 0;
}