#include <stdio.h>


void calculateCube(int *num);

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    printf("Original number: %d\n", number);

   
    calculateCube(&number);

    
    printf("Cube of the number: %d\n", number);

    return 0;
}


void calculateCube(int *num) {
    *num = (*num) * (*num) * (*num); 
}