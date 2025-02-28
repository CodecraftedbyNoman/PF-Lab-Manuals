#include <stdio.h>


float calculateBill(int units);

int main() {
    int units;
    float bill;

    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    
    bill = calculateBill(units);

    
    printf("Bill = %.2f PKR\n", bill);

    return 0;
}


float calculateBill(int units) {
    float totalBill = 0;

    if (units <= 100) {
        totalBill = units * 18; 
    } else if (units <= 200) {
        totalBill = 100 * 18 + (units - 100) * 22; 
    } else if (units <= 300) {
        totalBill = 100 * 18 + 100 * 22 + (units - 200) * 26; 
    } else if (units <= 700) {
        totalBill = 100 * 18 + 100 * 22 + 100 * 26 + (units - 300) * 30; 
    } else {
        totalBill = 100 * 18 + 100 * 22 + 100 * 26 + 400 * 30 + (units - 700) * 35; 
    }

    return totalBill;
}