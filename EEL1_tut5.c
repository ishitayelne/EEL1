//StringOperations
/*Develop a program to implement following operations on string (without using built in functions, write user defined functions):
    ∙ Comparison of two strings
    ∙ Copy of one string into another
    ∙ Finding the length of the string
    ∙ Concatenating two strings into one
*/
#include <stdio.h>

// Function to compare two strings manually
int str_compare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    char realOTP[20];
    char userOTP[20];

    printf("Set OTP: ");
    scanf("%s", realOTP);

    printf("Enter OTP: ");
    scanf("%s", userOTP);

    if (str_compare(realOTP, userOTP))
        printf("OTP Verified Successfully!\n");
    else
        printf("Invalid OTP!\n");

    return 0;
}
