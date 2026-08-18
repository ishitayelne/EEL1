/*Develop a C program to calculate the average and grade of each student in the first year B. Tech. program based on their marks obtained in the first semester.
The program should prompt the user to input the marks of each student for subjects such as Mathematics, Physics, Chemistry, English, and Computer Science.
Using control structures such as loops and conditional statements, the program should calculate the average marks and assign grades to each student according to predefined grading criteria.
Finally, the program should display the average marks and grade for each student.*/
#include <stdio.h>
int main()
{
    //Enter temperature in celcius
    float temp1, temp2, temp3, temp4, temp5, avg_temp;
    
    printf("Enter temperature of city on day 1: ");
    scanf("%f", &temp1);
    
    printf("\nEnter temperature of city on day 2: ");
    scanf("%f", &temp2);
    
    printf("\nEnter temperature of city on day 3: ");
    scanf("%f", &temp3);
    
    printf("\nEnter temperature of city on day 4: ");
    scanf("%f", &temp4);
    
    printf("\nEnter temperature of city on day 5: ");
    scanf("%f", &temp5);
    
    avg_temp = (temp1 + temp2 + temp3 + temp4 + temp5) / 5;
    
    printf("\n\nThe average temperature of the city in five days is: %f", avg_temp);
    
    
    if(avg_temp >= 35) {
        printf("\nTemperature of the city is hot.");
    }
    
    else if(avg_temp >= 25 && avg_temp < 35) {
        printf("\nTemperature of the city is warm.");
    }
    
    //Average is less than 25
    else {
        printf("\nTemperature of the city is cold.");
    }
    return 0;
}
