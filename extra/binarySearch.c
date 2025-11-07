// binary_search.c
#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        } else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}


































































































// Theory:
// Binary Search is an efficient searching technique that works only on sorted arrays.
// It divides the list into halves until the target is found.

// Process:
// Find middle element.

// If key < mid → search left half.

// If key > mid → search right half.

// Repeat until found or range is empty.

// Algorithm:
// Start.

// Input sorted array and key.

// Set low = 0, high = n-1.

// While low <= high:

// mid = (low + high)/2.

// If a[mid] == key, found.

// Else if key < a[mid], high = mid - 1.

// Else low = mid + 1.

// If not found, display message.

// Stop.