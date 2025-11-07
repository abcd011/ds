// bubble_sort.c
#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array (Bubble Sort): ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


































































































// Bubble Sort
// Aim:
// To implement Bubble Sort.

// Theory:
// Bubble Sort compares adjacent elements and swaps them if out of order.
// After each pass, the largest element “bubbles” to the end.
// Example array: [5, 1, 4, 2, 8] (n = 5)

// Pass 1 (i=0): compare adjacent pairs j from 0..3

// Compare 5 & 1 → swap → [1, 5, 4, 2, 8]

// Compare 5 & 4 → swap → [1, 4, 5, 2, 8]

// Compare 5 & 2 → swap → [1, 4, 2, 5, 8]

// Compare 5 & 8 → no swap → [1, 4, 2, 5, 8]
// After pass 1: largest 8 is at correct position (index 4).

// Pass 2 (i=1): j from 0..2

// Compare 1 & 4 → no swap → [1, 4, 2, 5, 8]

// Compare 4 & 2 → swap → [1, 2, 4, 5, 8]

// Compare 4 & 5 → no swap
// After pass 2: second largest 5 at index 3.

// Pass 3 (i=2): j from 0..1

// Compare 1 & 2 → no swap

// Compare 2 & 4 → no swap
// Array already sorted: [1,2,4,5,8].

// Algorithm:
// Start.

// Input n and array elements.

// Repeat for i = 0 to n-1:

// For j = 0 to n-i-1:

// If a[j] > a[j+1], swap.

// Print sorted array.

// Stop.