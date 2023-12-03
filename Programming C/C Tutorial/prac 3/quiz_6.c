/*Write a C program that prints the integer equivalents of some uppercase letters,
lowercase letters, digits and special symbols. As a minimum, determine the integer
equivalents of the following: A B C a b c 0 1 2 $ * + / and the blank character.*/

#include <stdio.h>

int main() {
    int arr[10];
    int i, min, max, sum = 0;
    float avg;

    printf("Enter 10 elements: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding minimum value
    min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum value: %d\n", min);

    // Finding maximum value
    max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);

    // Finding average value
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    avg = (float)sum / 10;
    printf("Average value: %.2f\n", avg);

    // Reverse order of values
    printf("Reverse order of values: ");
    for (i = 9; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}