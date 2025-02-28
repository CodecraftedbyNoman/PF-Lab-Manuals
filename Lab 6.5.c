#include <stdio.h>


void printSum(int a, int b);

int main() {
    int num1, num2;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    printSum(num1, num2);

    return 0;
}


void printSum(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}