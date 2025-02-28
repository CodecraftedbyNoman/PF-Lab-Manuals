#include <stdio.h>

float internetPackageCost(int GB, char network[]) {
    if (network[0] == 'Z' || network[0] == 'z') return GB * 100;
    else if (network[0] == 'J' || network[0] == 'j') return GB * 120;
    else if (network[0] == 'T' || network[0] == 't') return GB * 90;
    else return 0;
}

int main() {
    int GB;
    char network[10];
    printf("Enter data (GB): ");
    scanf("%d", &GB);
    printf("Enter network (Zong, Jazz, Telenor): ");
    scanf("%s", network);
    printf("Cost = %.2f PKR\n", internetPackageCost(GB, network));
    return 0;
}
