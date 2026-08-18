//Basic File Operations
/*Create a C program to perform various file operations, including reading from a file, writing to a file, and displaying the contents of a file.
The program should provide options for the user to select the desired operation from a menu.
Upon selecting an operation, the program should execute the corresponding functionality using appropriate file handling techniques.
Additionally, the program should handle errors such as file not found or permission issues gracefully and provide informative messages to the user.*/
#include<stdio.h>
void main() {
    char str[20];
    char class[5];
    float marks;

    printf("\nEnter student name:- ");
    scanf("%[^\n]", str);

    printf("Enter student class:- ");
    scanf("%s", class);

    printf("Enter student marks :- ");
    scanf("%f", &marks);

    FILE *fptr1;
    fptr1 = fopen("Student_record.txt", "w");

    fprintf(fptr1, "%s\n", str);
    fprintf(fptr1, "%s\n", class);
    fprintf(fptr1, "%f\n", marks);
    fclose(fptr1);

    FILE *fptr2;
    fptr2 = fopen("Student_record.txt", "r");

    fscanf(fptr2, "%s\n", str);
    fscanf(fptr2, "%s\n", class);
    fscanf(fptr2, "%f\n", &marks);
    fclose(fptr2);

}
