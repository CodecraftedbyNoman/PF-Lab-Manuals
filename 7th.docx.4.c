#include <stdio.h>

float remainingBalance(float amount) {
    return amount - (amount * 0.195 + amount * 0.10);
}

int main() {
    float amount;
    printf("Enter recharge amount (PKR): ");
    scanf("%f", &amount);
    printf("Available Balance = %.2f PKR\n", remainingBalance(amount));
    return 0;
}
