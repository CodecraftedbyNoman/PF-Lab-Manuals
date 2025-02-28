#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

int main() {
    float distance, fuelAverage, fuelPrice;
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter fuel average (km/l): ");
    scanf("%f", &fuelAverage);
    printf("Enter fuel price (PKR/l): ");
    scanf("%f", &fuelPrice);
    printf("Total Fuel Cost = %.2f PKR\n", calculateFuelCost(distance, fuelAverage, fuelPrice));
    return 0;
}
