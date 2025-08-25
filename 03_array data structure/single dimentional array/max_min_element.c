#include<stdio.h>
int main() {
    int array[10] = {1, 2, 3, 4, 5, 15, 7, 8, 9, 0};
    int max = array[0]; // Assume the first element is the maximum initially

    printf("An array elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", array[i]);
        if (array[i] > max) {    // < for minimum elelment
            max = array[i]; // Update max if a larger element is found
        }
    }

    printf("\nThe maximum element in the array is: %d\n", max);

    return 0;
}
