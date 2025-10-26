#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, cons = 0;

    // Read word
    printf("Enter a word: ");
    scanf("%s", str);

    // Count vowels and consonants
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                cons++;
            }
        }
        i++;
    }

    // Display total vowels and cons
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", cons);

    return 0;
}