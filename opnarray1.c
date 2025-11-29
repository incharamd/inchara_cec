#include <stdio.h>

int main() {

    int arr[10] = {10, 20, 30, 40, 50, 60, 70};  // Initial array
    int size = 7;                        // Current size
    int pos = 6;                         // Position where new value will be inserted
    int value = 33;                     

    // Shift elements to the right
    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;   // Insert new value at position
    size++;             // Increase size

    // Print array after insertion
    printf("Array after insertion:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

