//Telephone Directory
/*Develop a C program to search for the location or area of a person based on their phone number in a telephone directory.
The program should utilize an array to store the phone numbers along with their corresponding locations or areas.
Upon receiving a specific phone number as input from the user, the program should search the array and display the corresponding location or area if the phone number is found.
If the phone number is not found, the program should output a message indicating that the number is not in the directory.
Additionally, the program should handle invalid input and provide appropriate error messages.*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct student s[50];
    int choice, count = 0;

    while(1) {
        printf("\nMenu:\n1. Add Students\n2. Display\n3. Sort by ID\n4. Search by ID\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\nHow many students? ");
            scanf("%d", &count);

            for(int i = 0; i < count; i++) {
                printf("\nStudent %d\n", i+1);
                printf("ID: ");
                scanf("%d", &s[i].id);
                printf("Name: ");
                scanf("%s", s[i].name);
                printf("Marks: ");
                scanf("%f", &s[i].marks);
            }
        }

        else if(choice == 2) {
            printf("\n--- Student Records ---\n");
            for(int i = 0; i < count; i++){
                printf("\nID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
            }
        }

        else if(choice == 3) {
            for(int i = 0; i < count - 1; i++) {
                for(int j = i + 1; j < count; j++) {
                    if(s[i].id > s[j].id) {
                        struct student temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }
            printf("\nSorted successfully!\n");
        }

        else if(choice == 4) {
            int search_id, found = 0;
            printf("\nEnter ID to search: ");
            scanf("%d", &search_id);

            for(int i = 0; i < count; i++) {
                if(s[i].id == search_id) {
                    printf("\nRecord Found!");
                    printf("\nID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("\nRecord not found!");
        }

        else if(choice == 5) {
            exit(0);
        }

        else {
            printf("\nInvalid choice!");
        }
    }

    return 0;
}
