#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read sentence
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    // Convert case, i use ASCII values number of conversion
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // To uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // To lowercase
        }
        i++;
    }

    printf("Converted: %s\n", str);

    return 0;
}