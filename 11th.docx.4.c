#include <stdio.h>

int main() {
    float temps[30], total = 0, maxTemp = -100, minTemp = 100;
    for (int i = 0; i < 30; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
        total += temps[i];
        if (temps[i] > maxTemp) maxTemp = temps[i];
        if (temps[i] < minTemp) minTemp = temps[i];
    }
    float avg = total / 30;
    printf("Average temperature: %.2f°C\n", avg);
    printf("Max temperature: %.2f°C\n", maxTemp);
    printf("Min temperature: %.2f°C\n", minTemp);
    printf("Days above average temperature:\n");
    for (int i = 0; i < 30; i++) {
        if (temps[i] > avg) {
            printf("Day %d: %.2f°C", i + 1, temps[i]);
            if (temps[i] > 35) printf(" (Hot Day)");
            printf("\n");
        }
    }
    return 0;
}
