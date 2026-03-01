#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }                       // Current logical size of the array
    int position = 2;                    // Index of the element to delete (e.g., 30)

    // 1. Check if the position is valid
    if (position >= size || position < 0) {
        printf("Invalid position for deletion.\\n");
    } else {
        // 2. Shift elements to the left starting from the position
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        // 3. Decrement the logical size of the array
        size--;

        // Print the array after deletion
        printf("Array after deletion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\\n");
    }

    return 0;
}
