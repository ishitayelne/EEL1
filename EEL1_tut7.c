//Application of Recursive Function Call
/*Develop a C program to calculate the sum of the first 10 numbers using recursive function calls and pointers.
The program should define a recursive function that takes a pointer to an integer as an argument and returns the sum of the first 10 numbers.
Within the function, recursion should be used to compute the sum iteratively.
Finally, the program should display the calculated sum.*/
#include <stdio.h>

int sum_recursive(int *n) {
    if (*n == 0) {
        return 0;// base case
    }
    int current = *n;
    (*n)--; // decrease value using pointer
    
    return current + sum_recursive(n); // recursive step
}

int main() {
    int num = 10;
    int result = sum_recursive(&num);

    printf("Sum of first 10 numbers = %d\n", result);

    return 0;
}
