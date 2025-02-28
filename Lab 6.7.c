#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    do {
        
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("Enter 'n' to exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); 
        if (choice == 'n' || choice == 'N') {
            printf("Exiting the calculator. Goodbye!\n");
            break; 
        }

        
        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        
        switch (choice) {
            case '1':
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case '2':
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case '3':
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case '4':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

    } while (1); 

    return 0;
}