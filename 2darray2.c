#include <stdio.h>      // Line 1: For printf
#include <stdlib.h>     // Line 2: For atoi (string to int conversion)

int main(int argc, char *argv[]) { // Line 4: main with command line arguments

    if (argc != 3) {                              // Line 6: Expect program name + 2 numbers
        printf("Usage: %s num1 num2\n", argv[0]); // Line 7: Show correct usage
        return 1;                               // Line 8: Return non-zero for error
    }

    int a = atoi(argv[1]);         // Line 10: Convert first argument string to int
    int b = atoi(argv[2]);         // Line 11: Convert second argument string to int

    int sum = a + b;               // Line 13: Add the two numbers

    printf("Sum = %d\n", sum);     // Line 15: Print result

    return 0;
}    

