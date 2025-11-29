#include <stdio.h>  // Line 1: For printf function

int main(void) {    // Line 3: Start of main function

    char name[] = "abc";        // Line 5: Declare a char array (string) initialized with "abc"
                                // Internally: 'a' 'b' 'c' '\0'

    printf("String: %s\n", name);   // Line 8: Print the whole string using %s


    printf("\nCharacters one by one:\n");    // Line 10: Heading for per-character display
    printf("name[0] : %c\n", name[0]);       // Line 11: Print first character 'a'
    printf("name[1] : %c\n", name[1]);       // Line 12: Print second character 'b'
    printf("name[2] : %c\n", name[2]);       // Line 13: Print third character 'c'


    printf("\nASCII values:\n");             // Line 15: Heading for ASCII values
    printf("ASCII of %c : %d\n", name[0], name[0]); // Line 16: ASCII of 'a'
    printf("ASCII of %c : %d\n", name[1], name[1]); // Line 17: ASCII of 'b'
    printf("ASCII of %c : %d\n", name[2], name[2]); // Line 18: ASCII of 'c'


    printf("\nNull terminator example:\\0\n");     // Line 20: Explain about '\0'
    
    return 0;
}