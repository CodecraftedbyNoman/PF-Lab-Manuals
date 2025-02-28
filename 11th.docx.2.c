#include <stdio.h>

int main() {
    float expenses[7], total = 0, budget;
    printf("Enter your daily budget: ");
    scanf("%f", &budget);
    for (int i = 0; i < 7; i++) {
        printf("Enter expenses for day %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];
        if (expenses[i] > budget) {
            printf("Day %d: Overspent by %.2f PKR\n", i + 1, expenses[i] - budget);
        }
    }
    printf("Total weekly spending: %.2f PKR\n", total);
    printf("Average daily spending: %.2f PKR\n", total / 7);
    return 0;
}
