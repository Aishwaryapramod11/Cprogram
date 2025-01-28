#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
if (age >= 21) {
        printf("Congratulation! You are eligible for casting your vote");
    } else {
        printf("Sorry! You are not eligible for casting your vote.");
    }

    return 0;
}