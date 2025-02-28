#include <stdio.h>

float calculateTrainFare(char class[], float distance) {
    if (class[0] == 'E' || class[0] == 'e') return distance * 5;
    else if (class[0] == 'B' || class[0] == 'b') return distance * 10;
    else if (class[0] == 'F' || class[0] == 'f') return distance * 15;
    else return 0;
}

int main() {
    char class[20];
    float distance;
    printf("Enter class (Economy, Business, First): ");
    scanf("%s", class);
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Fare = %.2f PKR\n", calculateTrainFare(class, distance));
    return 0;
}
