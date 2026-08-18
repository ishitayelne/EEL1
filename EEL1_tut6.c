//Electricity Bill Generator
/*Design a system to generate electricity bills based on the units consumed by customers.
The system should accept customer information including Customer ID, Customer Name, Customer Telephone Number, Customer Type (Domestic/Commercial), and Number of Units consumed.
Implement functions to handle input, calculate the bill, and display it in a proper format.
The bill format should include all relevant details such as Customer ID, Customer Name, Customer Telephone Number, Customer Type, Number of Units consumed, and the calculated bill amount.*/
#include <stdio.h>

int main()
{
    //Currency is in rupees
    printf("\nSubsctiption plan details:-");
    printf("\n---------------------------------------------------------------");
    printf("\n\tPlan\t\tDuration\t\tPrice(in INR)\t\tDiscount");
    printf("\n---------------------------------------------------------------");
    printf("\n\t1\t\t\t1 month\t\t\t\t150\t\t\t\t\t0");
    printf("\n\t2\t\t\t3 months\t\t\t360\t\t\t\t\t20%%");
    printf("\n\t3\t\t\t6 months\t\t\t630\t\t\t\t\t30%%");
    printf("\n---------------------------------------------------------------");
    
    /*------------------------------------------------------------------------*/
    
    int plan;
    float tax, original_price, total;
    char name[20], date[20], email_id[40];
    
    //Name, date and email id should not contain whitespace.
    printf("\n\nEnter your name: ");
    scanf("%s", name);
    printf("Enter today's date: ");
    scanf("%s", date);
    printf("Enter your email id: ");
    scanf("%s", email_id);
    
    
    printf("\n\nEnter your desired subscription plan(1, 2, 3): ");
    scanf(" %d", &plan);


    /*------------------------------------------------------------------------*/
    
    printf("\n\n\n\n-------------------------------------------------------");
    printf("\n\t\t\t\t\t\tBill");
    printf("\n-------------------------------------------------------");
    
    printf("\n\nName: %s", name);
    printf("\nDate: %s", date);
    printf("\nEmail ID: %s", email_id);
    //printf("\n\nSelected plan: %d", plan);
    
    
    switch(plan) {
        {
            case 1:
                printf("\nSelected plan: %d", plan);
                original_price = 150;
                tax = (original_price*10)/100;
                total = original_price + tax;
                printf("\n\n\n\n\nOriginal Plan Price | ₹%f\n\nTaxes (10%)         | ₹%f\n\nTOTAL               | ₹%f/-",original_price, tax, total);
             break;
        }
        {
            case 2:
                printf("\nSelected plan: %d", plan);
                original_price = 360;
                tax = (original_price*10)/100;
                total = original_price + tax;
                printf("\n\n\n\n\nOriginal Plan Price | ₹%f\n\nTaxes (10%)         | ₹%f\n\nTOTAL               | ₹%f/-",original_price, tax, total);
             break;
        }
        {
            case 3:
                printf("\nSelected plan: %d", plan);
                original_price = 630;
                tax = (original_price*10)/100;
                total = original_price + tax;
                printf("\n\n\n\n\nOriginal Plan Price | ₹%f\n\nTaxes (10%)         | ₹%f\n\nTOTAL               | ₹%f/-",original_price, tax, total);
             break;
        }
    
             default:
        {
            printf("\n\n\n\nInvalid input");
        }
    }
    
    printf("\n-------------------------------------------------------");
    printf("\n\t\t\t\t\tTHANK YOU!");
    printf("\n-------------------------------------------------------");
    
    return 0;
}
