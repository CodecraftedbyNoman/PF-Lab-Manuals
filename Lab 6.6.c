#include <stdio.h>


float avg(int a, int b); 
int max(int a, int b);   

int main() {
    int num1, num2;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    float average = avg(num1, num2);
    printf("The average of %d and %d is: %.2f\n", num1, num2, average);

    
    int maximum = max(num1, num2);
    printf("The maximum number between %d and %d is: %d\n", num1, num2, maximum);

    return 0;
}


float avg(int a, int b) {
    return (float)(a + b) / 2; 
}


int max(int a, int b) {
    return (a > b) ? a : b; 
}