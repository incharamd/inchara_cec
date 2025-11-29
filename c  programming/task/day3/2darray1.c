#include <stdio.h>   // Line 1: For printf
int main(void) {     // Line 3: Start of main

    int arr[5] = {5, 2, 9, 1, 3}; // Line 5: Declare and initialize array
    int n = 5;                    // Line 6: Size of array
    int i, j;                     // Line 7: Loop counters

    // ---------- O(n) : Find Maximum ----------
    int max = arr[0];             // Line 10: Assume first element is maximum

    for (i = 1; i < n; i++) {     // Line 12: Loop from second element to last
        if (arr[i] > max) {       // Line 13: If current element > max
            max = arr[i];         // Line 14: Update max
        }
    }

    printf("Maximum element (O(n)) = %d\n", max); // Line 17: Print maximum

    // ---------- O(n^2) : Bubble Sort ----------
    for (i = 0; i < n - 1; i++) {       // Line 20: Outer loop for passes
        for (j = 0; j < n - 1 - i; j++) { // Line 21: Inner loop for comparisons
            if (arr[j] > arr[j + 1]) {    // Line 22: If element is greater than next
                int temp = arr[j];        // Line 23: Swap elements
                arr[j] = arr[j + 1];      // Line 24
                arr[j + 1] = temp;        // Line 25
            }
        }
    }

    printf("Sorted array (O(n^2)) = "); // Line 29: Print label
    for (i = 0; i < n; i++) {           // Line 30: Loop over sorted array
        printf("%d ", arr[i]);          // Line 31: Print element
    }
    printf("\n");                       // Line 32: New line

    return 0;                           // Line 34: Successful exit
}
