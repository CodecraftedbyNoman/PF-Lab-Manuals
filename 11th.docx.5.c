#include <stdio.h>

int main() {
    float hours[7], total = 0;
    for (int i = 0; i < 7; i++) {
        printf("Enter study hours for day %d: ", i + 1);
        scanf("%f", &hours[i]);
        total += hours[i];
        if (hours[i] > 10) {
            printf("Warning: Burnout Alert!\n");
        }
    }
    printf("Total study hours: %.2f\n", total);
    if (total < 35) {
        printf("Motivational Message: You need to study more to meet your weekly goal!\n");
    } else {
        printf("Great job! You met your weekly goal.\n");
    }
    return 0;
}
