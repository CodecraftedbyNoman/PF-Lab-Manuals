#include <stdio.h>

float calculateZakat(float totalWealth, float goldRate) {
    float nisabGold = 87.48 * goldRate;
    float nisabSilver = 612.36 * (goldRate / 18000) * 18000;
    float nisabThreshold = (nisabGold < nisabSilver) ? nisabGold : nisabSilver;
    if (totalWealth >= nisabThreshold) return totalWealth * 0.025;
    else return 0;
}

int main() {
    float totalWealth, goldRate;
    printf("Enter total wealth (PKR): ");
    scanf("%f", &totalWealth);
    printf("Enter current gold rate (PKR/gram): ");
    scanf("%f", &goldRate);
    printf("Zakat Payable = %.2f PKR\n", calculateZakat(totalWealth, goldRate));
    return 0;
}
