#include <stdio.h>

int main() {
      int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int value_to_delete;
    scanf("%d",&value_to_delete);
    int position = -1;

    // Find the position of the first occurrence of the value
    for (int i = 0; i < size; i++) {
        if (arr[i] == value_to_delete) {
            position = i;
            break; // Stop at the first occurrence
        }
    }

    if (position == -1) {
        printf("Element %d not found in the array.\n", value_to_delete);
    } else {
        // Shift elements
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        // Print the new array
        printf("Array after deleting %d: ", value_to_delete);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\\n");
    }

    return 0;
}
