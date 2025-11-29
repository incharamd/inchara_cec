#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    char section[10];
};

int main() {
    struct Student students[50];  // Array to store up to 50 students
    int count = 0;                // Number of students entered
    int choice;

    do {
        printf("\n--- Student Menu ---\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline left by scanf

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter student name: ");
                    fgets(students[count].name, sizeof(students[count].name), stdin);
                    students[count].name[strcspn(students[count].name, "\n")] = '\0'; // remove newline

                    printf("Enter roll number: ");
                    scanf("%d", &students[count].roll_no);
                    getchar();

                    printf("Enter section: ");
                    fgets(students[count].section, sizeof(students[count].section), stdin);
                    students[count].section[strcspn(students[count].section, "\n")] = '\0';

                    count++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Student list is full!\n");
                }
                break;

            case 2:
                if(count == 0) {
                    printf("No students entered yet.\n");
                } else {
                    printf("\n--- Student Details ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("Name    : %s\n", students[i].name);
                        printf("Roll No : %d\n", students[i].roll_no);
                        printf("Section : %s\n", students[i].section);
                        printf("-----------------------\n");
                    }
                }
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 3);

    return 0;
}