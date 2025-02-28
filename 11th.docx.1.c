#include <stdio.h>

int main() {
    int steps[24], total = 0, maxSteps = 0, minSteps = 100000, maxHour, minHour;
    for (int i = 0; i < 24; i++) {
        printf("Enter steps for hour %d: ", i + 1);
        scanf("%d", &steps[i]);
        total += steps[i];
        if (steps[i] > maxSteps) {
            maxSteps = steps[i];
            maxHour = i + 1;
        }
        if (steps[i] < minSteps) {
            minSteps = steps[i];
            minHour = i + 1;
        }
        if (steps[i] == 0) {
            printf("Warning: No steps recorded in hour %d (Inactivity).\n", i + 1);
        }
    }
    printf("Total steps: %d\n", total);
    printf("Average steps per hour: %.2f\n", (float)total / 24);
    printf("Max steps: %d (Hour %d)\n", maxSteps, maxHour);
    printf("Min steps: %d (Hour %d)\n", minSteps, minHour);
    return 0;
}
