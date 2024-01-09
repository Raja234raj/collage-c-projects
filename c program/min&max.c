#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("List is empty.\n");
        return 0;
    }

    int numbers[n];

    printf("Enter the list of integers:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0], min = numbers[0];

    for (int i = 1; i < n; ++i) {
        max = (numbers[i] > max) ? numbers[i] : max;
        min = (numbers[i] < min) ? numbers[i] : min;
    }

    printf("Maximum: %d\nMinimum: %d\n", max, min);

    return 0;
}
