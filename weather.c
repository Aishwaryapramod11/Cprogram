#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);
     if (temp < 0) {
        printf("Freezing weather");
    } else if (temp >= 0 && temp <= 10) {
        printf("Very Cold weather");
    } else if (temp > 10 && temp <= 20) {
        printf("Cold weather");
    } else {
        printf("hot weather");
    }

    return 0;
}