#include <stdio.h>

float convertCurrency(float amount, char currencyType) {
    float rate;
    printf("Enter exchange rate for %c to PKR: ", currencyType);
    scanf("%f", &rate);
    return amount * rate;
}

int main() {
    float amount;
    char currencyType;
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType);
    printf("PKR = %.2f\n", convertCurrency(amount, currencyType));
    return 0;
}
