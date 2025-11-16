#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LEN 50
#define MAX_DESC_LEN 200

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LEN + 1];
    int ids[MAX_STUDENTS];
    char backup_names[MAX_STUDENTS][MAX_NAME_LEN + 1];
    char descriptions[MAX_STUDENTS][MAX_DESC_LEN];
    char courses[MAX_STUDENTS][MAX_NAME_LEN + 1];

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

    for (int i = 0; i < MAX_STUDENTS; i++) {
        strcpy(backup_names[i], names[i]);
        strcat(names[i], " - Student");
    }

    printf("\nModified Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", names[i]);
    }

    printf("\nBackup Names (unchanged):\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", backup_names[i]);
    }

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter course name for %s: ", backup_names[i]);
        scanf("%s", courses[i]);
        while (getchar() != '\n');  

        strcpy(descriptions[i], backup_names[i]);
        strcat(descriptions[i], " (ID: ");
        char id_str[10];
        sprintf(id_str, "%d", ids[i]);
        strcat(descriptions[i], id_str);
        strcat(descriptions[i], ") enrolled in ");
        strcat(descriptions[i], courses[i]);
    }

    printf("\nFull Descriptions:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", descriptions[i]);
    }

    char search_name[MAX_NAME_LEN + 1];
    printf("\nEnter exact name to search: ");
    scanf("%s", search_name);
    while (getchar() != '\n');  

    int found = 0;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (strcmp(backup_names[i], search_name) == 0) {
            printf("Found: %s\n", descriptions[i]);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }

    char substring[MAX_NAME_LEN + 1];
    printf("\nEnter substring to search: ");
    scanf("%s", substring);
    while (getchar() != '\n');  // Clear newline

    found = 0;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (strstr(backup_names[i], substring) != NULL) {
            printf("Match: %s\n", descriptions[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No matches found.\n");
    }

    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = 0; j < MAX_STUDENTS - i - 1; j++) {
            if (strcmp(backup_names[j], backup_names[j + 1]) > 0) {
                char temp_name[MAX_NAME_LEN + 1];
                strcpy(temp_name, backup_names[j]);
                strcpy(backup_names[j], backup_names[j + 1]);
                strcpy(backup_names[j + 1], temp_name);

                int temp_id = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = temp_id;

                char temp_desc[MAX_DESC_LEN];
                strcpy(temp_desc, descriptions[j]);
                strcpy(descriptions[j], descriptions[j + 1]);
                strcpy(descriptions[j + 1], temp_desc);

                char temp_course[MAX_NAME_LEN + 1];
                strcpy(temp_course, courses[j]);
                strcpy(courses[j], courses[j + 1]);
                strcpy(courses[j + 1], temp_course);
            }
        }
    }

    printf("\nSorted Student Data:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, ID: %d, Course: %s\n", backup_names[i], ids[i], courses[i]);
    }

    return 0;
}
