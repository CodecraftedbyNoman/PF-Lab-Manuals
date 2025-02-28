#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showLoadSheddingSchedule(char city[]) {
    srand(time(0));
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("Load Shedding Schedule for %s:\n", city);
    for (int i = 0; i < 7; i++) {
        int start1 = rand() % 12;
        int end1 = start1 + 2;
        int start2 = rand() % 12 + 12;
        int end2 = start2 + 2;
        printf("%s: %d AM - %d AM, %d PM - %d PM\n", days[i], start1, end1, start2 - 12, end2 - 12);
    }
}

int main() {
    char city[50];
    printf("Enter your city: ");
    scanf("%s", city);
    showLoadSheddingSchedule(city);
    return 0;
}
