#include <stdio.h>        // Line 1: Include standard input/output header for printf, scanf
int main(void) {          // Line 3: Program execution starts from main, returns an int
                            // Line 5: Declare a 2D array for 3 students (rows) and 3 subjects (columns)
    int marks[3][3] = {
        {80, 75, 90},                // Line 7: Marks of student 0 in 3 subjects
        {60, 70, 65},                // Line 8: Marks of student 1
        {88, 92, 79}            // Line 9: Marks of student 2
    };
    int i, j;              // Line 12: Loop variables for rows (i) and columns (j)
    int total;             // Line 13: To store total marks of each student

    // Line 15: Loop over each student (row)
    for (i = 0; i < 3; i++) {
        total = 0;                                      // Line 17: Reset total for each student
        // Line 19: Loop over subjects (columns) for current student
        for (j = 0; j < 3; j++) {
            total = total + marks[i][j];                               // Line 21: Add subject mark to total
        }

        // Line 24: Print total for each student
        printf("Total marks of student %d = %d\n", i, total);
    }

    return 0; // Line 27: Return 0 to indicate successful execution
}

