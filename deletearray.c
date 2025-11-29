#include <stdio.h>

int main() {

    int arr[10] = {10, 20, 30, 40, 50 ,60,70};  // Initial array with 6 elements
    int size = 7;                           // Current size of array
    int pos = 5;                            // Position to delete (index value)

    // Shift elements to the left after deletion
    for(int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;  // reduce size

    // Print updated array
    printf("Array after deletion:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}