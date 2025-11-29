#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program...\n");
            break;   // exit the loop
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (b == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n11");
    

        }
    }

    return 0;
}