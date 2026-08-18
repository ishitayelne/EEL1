//Create Employee Database using Structure and Display Information
/*Design a C program to display the information of all employees in a company sorted by their salaries, from highest to lowest.
Each employee's information, including their employee ID and salary, is stored in a database using arrays and structures.
The program should read the employee data from the database, organize it based on the salaries, and then print the details of each employee in descending order of their salaries.
Additionally, the program should handle ties in salary and provide a consistent method for sorting the employees.*/
#include <stdio.h>
struct student {
    int stu_marks_ut, stu_marks_ete;
    int stu_rollno;
    float stu_sgpa;
    int studentdetails;
    char stu_name[20];
};

int main() {
    struct student s[5];
    int i, j;
    struct student temp;
    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        //1
        printf("Enter student name: ");  //Name should NOT contain whitespace
        scanf("%s", s[i].stu_name);
        //2
        printf("Enter student Roll no.: ");
        scanf("%d", &s[i].stu_rollno);
        //3
        printf("Enter student marks for Unit Test(UT): ");
        scanf("%d", &s[i].stu_marks_ut);
        //4
        printf("Enter student marks for End Term Examination(ETE): ");
        scanf("%d", &s[i].stu_marks_ete);
        //5
        printf("Enter student SGPA: ");
        scanf("%f", &s[i].stu_sgpa);

        //studentdetails = total marks
        s[i].studentdetails = s[i].stu_marks_ut + s[i].stu_marks_ete;
    }
    
    // Sorting based on studentdetails (i.e. total marks)
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].studentdetails < s[j].studentdetails) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n-------------------------------------------\n");
    printf("\t\tSTUDENT DETAILS\n");
    printf("-------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("Student Name: %s", s[i].stu_name);
        printf("\nStudent Roll no: %d", s[i].stu_rollno);
        printf("\nStudent marks for UT: %d", s[i].stu_marks_ut);
        printf("\nStudent marks for ETE: %d", s[i].stu_marks_ete);
        printf("\nTotal Marks: %d", s[i].studentdetails);
        printf("\nStudent SGPA: %f", s[i].stu_sgpa);
        printf("\n-----------------------------------------\n");
    }

    return 0;
}
