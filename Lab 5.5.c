#include <stdio.h>

int main() {
    int sum = 0;
    int i = 0;   

    
    do {
        sum += i; 
        i++;      
    } while (i <= 9); 

    
    printf("The sum of the first 10 decimal digits (0 to 9) is: %d\n", sum);

    return 0;
}