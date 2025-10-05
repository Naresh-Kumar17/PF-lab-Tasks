#include <stdio.h>

int main() {
    char username[6];  
    char password[7];  
    char login_user[6]; 
    char login_pass[7]; 
    int valid_username = 0;  
    int valid_password = 0;  
    int i; 
    int len;  
    
    while (valid_username == 0) {
        printf("Enter username (exactly 5 alphabets): ");
        scanf("%s", username);
        
        //  length check 
        len = 0;
        while (username[len] != '\0') {
            len++;
        }
        if (len != 5) {
            printf("Invalid: Username must be exactly 5 characters.\n");
            continue; 
        }
      
        valid_username = 1;  
        for (i = 0; i < 5; i++) {
            char ch = username[i];
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                continue; 
            } else {
                printf("Invalid: Username must contain only alphabets (A-Z, a-z).\n");
                valid_username = 0; 
                break; 
            }
        }
    }
    
    while (valid_password == 0) {
        printf("Enter password (exactly 6 characters, at least 1 digit, 1 uppercase, 1 lowercase): ");
        scanf("%s", password);
        
        //  length check 
        len = 0;
        while (password[len] != '\0') {
            len++;
        }
        if (len != 6) {
            printf("Invalid: Password must be exactly 6 characters.\n");
            continue; 
        }
        
        // Check  flags and loop 
        int has_digit = 0;
        int has_upper = 0;
        int has_lower = 0;
        valid_password = 1;  
        
        for (i = 0; i < 6; i++) {
            char ch = password[i];
            
            // Check for digit
            if (ch >= '0' && ch <= '9') {
                has_digit = 1;
                continue;  
            }
            
            // Check for uppercase
            if (ch >= 'A' && ch <= 'Z') {
                has_upper = 1;
                continue;  
            }
            
            // Check for lowercase
            if (ch >= 'a' && ch <= 'z') {
                has_lower = 1;
                continue;  
            }
            
           
        }
        
        if (has_digit == 0 || has_upper == 0 || has_lower == 0) {
            printf("Invalid: Password must have at least 1 digit, 1 uppercase, and 1 lowercase.\n");
            valid_password = 0;  
        }
    }
    
    printf("Account Created Successfully\n");
    
    printf("Login:\n");
    printf("Enter username: ");
    scanf("%s", login_user);
    printf("Enter password: ");
    scanf("%s", login_pass);
    
    int user_len = 0;
    while (login_user[user_len] != '\0') {
        user_len++;
    }
    int match_username = (user_len == 5);  
    if (match_username) {
        for (i = 0; i < 5; i++) {
            if (login_user[i] != username[i]) {
                match_username = 0;  
                break;  
            }
        }
    }
    
    int pass_len = 0;
    while (login_pass[pass_len] != '\0') {
        pass_len++;
    }
    int match_password = (pass_len == 6);  
    if (match_password) {
        for (i = 0; i < 6; i++) {
            if (login_pass[i] != password[i]) {
                match_password = 0;  
                break;  
            }
        }
    }
       
    if (match_username && match_password) {
        printf("Welcome %s, you are now logged in.\n", username);
    } else {
        printf("Login failed: Invalid username or password.\n");
    }
    
    return 0;
}