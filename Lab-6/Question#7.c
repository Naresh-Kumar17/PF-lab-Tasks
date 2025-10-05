#include <stdio.h>
int main() {
    char sentence[500]; 
    int word_start = 0;  
    int word_end = 0, num_words = 0, j = 0, k = 0, i=0;  
    printf("Enter a sentence (up to 499 characters): ");
    gets(sentence); 
    i = 0;
    while (sentence[i] != '\0') {  
        if (sentence[i] == ' ') { 
            num_words++;  
        }
        i++;
    }
    num_words++;  
    if (num_words == 0) num_words = 1; 
    printf("Reversed word order: ");
    int current_word = num_words;  
    while (current_word > 0) {
        word_start = 0;
        int words_found = 0;
        j = 0;
        while (words_found < current_word - 1 && sentence[j] != '\0') {
            if (sentence[j] == ' ') {
                words_found++;
                word_start = j + 1;
            }
            j++;
        }
        word_end = word_start;
        while (sentence[word_end] != ' ' && sentence[word_end] != '\0') {
            word_end++;
        }
        for (k = word_start; k < word_end; k++) {
            printf("%c", sentence[k]);  
        }
        if (current_word > 1) {
            printf(" ");
        }
        current_word--; 
    }
    printf("\n");  
    return 0;
}