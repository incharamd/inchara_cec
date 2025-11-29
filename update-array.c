#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int pos = 1;          // Index to update
    int newValue = 99;

    arr[pos] = newValue;  // Replace old value with new

    printf("Array after update:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}