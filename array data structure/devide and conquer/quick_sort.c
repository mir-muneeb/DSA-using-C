#include<stdio.h>

void quicksort(int array[], int start, int end);
int partition(int array[], int start, int end);

int main() {
    int array[10] = {48, 22, 88, 34, 6, 3, 6, 2, 68, 44};
    int n = 10;
    int start = 0, end = n - 1;

    quicksort(array, start, end);

    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    return 0;
}

void quicksort(int array[], int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }

    // Partition the array and get the pivot index
    int p = partition(array, start, end);

    // Recursively sort the left and right subarrays
    quicksort(array, start, p - 1);
    quicksort(array, p + 1, end);
}

int partition(int array[], int start, int end) {
    int pivot = array[start]; // Choose the pivot element
    int count = 0;

    // Count elements smaller than or equal to the pivot
    for (int i = start + 1; i <= end; i++) {
        if (array[i] <= pivot) {
            count++;
        }
    }

    // Place the pivot in its correct position
    int pivotIndex = start + count;
    int temp = array[pivotIndex];
    array[pivotIndex] = array[start];
    array[start] = temp;

    // Handle elements smaller and greater than the pivot
    int i = start, j = end;

    //The loop continues until the two pointers, i and j, cross the pivot index.
    while (i < pivotIndex && j > pivotIndex) {

        //This ensures i stops at an element that is greater than the pivot and needs to be swapped.
        while (array[i] <= pivot) {
            i++;
        }
        //This ensures j stops at an element that is less than or equal to the pivot and needs to be swapped.
        while (array[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            // If i and j point to elements on the wrong side of the pivot, swap them to correct partitions
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

        }
    }

    return pivotIndex; // Return the pivot index
    /* 
     Once the loop finishes, the array is partitioned correctly:
     Elements left of the pivot index are ≤ pivot.
     Elements right of the pivot index are > pivot.
     The function returns the final position of the pivot to the quicksort function
    */
}
