#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 1, 3, 5};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Array to store the frequency of elements (initialized to 0)
    int freq[n];
    int i, j, count;

    // Mark all elements as unvisited initially
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }

    printf("Frequency of each element in the array:\n");

    for (i = 0; i < n; i++) {
        // Only process if the element hasn't been counted yet
        if (freq[i] == 0) {
            count = 1; // Initialize count for the current element

            // Inner loop to check for duplicates
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 1; // Mark duplicate as visited/counted
                }
            }
            // Print the element and its frequency
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
