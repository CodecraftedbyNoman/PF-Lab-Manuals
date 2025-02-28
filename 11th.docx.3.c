#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int valid = 0;
    while (!valid) {
        printf("Enter a password: ");
        scanf("%s", password);
        int length = strlen(password) >= 8;
        int upper = 0, lower = 0, digit = 0;
        for (int i = 0; password[i]; i++) {
            if (isupper(password[i])) upper = 1;
            if (islower(password[i])) lower = 1;
            if (isdigit(password[i])) digit = 1;
        }
        if (length && upper && lower && digit) {
            valid = 1;
            printf("Strong password!\n");
        } else {
            printf("Weak password. Missing:\n");
            if (!length) printf("- At least 8 characters\n");
            if (!upper || !lower) printf("- Both uppercase and lowercase letters\n");
            if (!digit) printf("- At least one digit\n");
        }
    }
    return 0;
}
