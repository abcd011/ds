// insertion_sort.c
#include <stdio.h>

int main() {
    int n, i, j, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Insertion Sort
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array (Insertion Sort): ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


































































































// Insertion Sort
// Aim:
// To implement Insertion Sort.

// Theory:
// Insertion Sort builds the sorted array one element at a time by inserting each element at its correct position.
// [64, 25, 12, 22, 11]
// Pass 1 (i=0): find min in 0..4 → min=11 at index 4 → swap a[0] & a[4]
// → [11, 25, 12, 22, 64]

// Pass 2 (i=1): find min in 1..4 → min=12 at index 2 → swap a[1] & a[2]
// → [11, 12, 25, 22, 64]

// Pass 3 (i=2): find min in 2..4 → min=22 at index 3 → swap a[2] & a[3]
// → [11, 12, 22, 25, 64]

// Pass 4 (i=3): find min in 3..4 → min=25 at index 3 → swap with itself (no change)
// → [11,12,22,25,64]

// Algorithm:
// Start.

// Input array.

// For i = 1 to n-1:

// Set key = a[i].

// Compare backward (j = i-1) and shift greater elements to right.

// Insert key at correct position.

// Print sorted array.

// Stop.