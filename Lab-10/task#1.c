#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LEN 50

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LEN + 1];
    int ids[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name for student %d (only alphabets, <=50 chars): ", i + 1);
        scanf("%s", names[i]);
        
        int valid = 1;
        int len = strlen(names[i]);
        if (len > MAX_NAME_LEN) {
            valid = 0;
        } else {
            for (int j = 0; j < len; j++) {
                if (!isalpha(names[i][j])) {
                    valid = 0;
                    break;
                }
            }
        }
        
        if (!valid) {
            printf("Invalid name. Try again.\n");
            i--;  
            continue;
        }

        printf("Enter ID for student %d (positive integer): ", i + 1);
        if (scanf("%d", &ids[i]) != 1 || ids[i] <= 0) {
            printf("Invalid ID. Try again.\n");
            while (getchar() != '\n'); 
            i--;
            continue;
        }
        while (getchar() != '\n');  
    }

    printf("\nValidated Student Data:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, ID: %d\n", names[i], ids[i]);
    }

    return 0;
}
