
#include <stdio.h>

int main() {
    int maths, physics, chemistry, total;
    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);
    total = maths + physics + chemistry;
       if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || (maths + physics >= 140)) {
        printf("The student is eligible for admission.\n");
    } else {
        printf("The student is not eligible for admission.\n");
    }

    return 0;
}