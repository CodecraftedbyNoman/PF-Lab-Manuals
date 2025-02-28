#include <stdio.h>

float calculateBill(int units) {
    if (units <= 100) return units * 18;
    else if (units <= 200) return 100 * 18 + (units - 100) * 22;
    else if (units <= 300) return 100 * 18 + 100 * 22 + (units - 200) * 26;
    else if (units <= 700) return 100 * 18 + 100 * 22 + 100 * 26 + (units - 300) * 30;
    else return 100 * 18 + 100 * 22 + 100 * 26 + 400 * 30 + (units - 700) * 35;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    printf("Bill = %.2f PKR\n", calculateBill(units));
    return 0;
}
