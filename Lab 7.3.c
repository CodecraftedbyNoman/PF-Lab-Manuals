#include <stdio.h>


void displayDivisors(int num);

int main() {
    int number;

    
    printf("Enter an integer number: ");
    scanf("%d", &number);

    
    displayDivisors(number);

    return 0;
}


void displayDivisors(int num) {
    printf("Divisors of %d are: ", num);

    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");  
}