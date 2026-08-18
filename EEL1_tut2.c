//Simulation of Electrical Switch
/*Design a C program to simulate the operation of an electrical switch, where the program takes input values of either '0' or '1' representing the switch being off or on, respectively.
Using a suitable conditional statement, the program should interpret the input values and display the corresponding condition as "on" and "off".
Additionally, the program should handle invalid input values and provide appropriate error messages.*/
#include <stdio.h>
int main()
{
    int water_level;
    printf("Enter water level: ");
    scanf("%d", &water_level);
    
    if (water_level < 50) {
        printf("\nSprinkler has turned ON\n");
    }
    
    else (water_level >= 50); {
        printf("\nSprinkler has turned OFF.\n");
    }
    
    return 0;
}
