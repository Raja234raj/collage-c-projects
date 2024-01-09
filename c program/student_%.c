#include <stdio.h>

int main() {
    float percentage;

    // Input the percentage of marks
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    // Determine the class awarded
    if (percentage >= 70.0) {
        printf("Class Awarded: Distinction\n");
    } else {
        printf("Class Awarded: Not Distinction\n");
    }

    return 0;
}
