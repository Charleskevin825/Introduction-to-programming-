#include <stdio.h>

int main() {
    int customerID, unitConsumed;
    double charges, totalBill, surcharge = 0.0;
    char customerName[50];

    // Customer details input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // Read name with spaces

    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate charges based on units consumed
    if (unitConsumed <= 300) {
        charges = unitConsumed * 1.75;
    } else if (unitConsumed <= 600) {
        charges = (300 * 1.75) + ((unitConsumed - 300) * 2.00);
    } else if (unitConsumed <= 800) {
        charges = (300 * 1.75) + (300 * 2.00) + ((unitConsumed - 600) * 3.00);
    } else {
        charges = (300 * 1.75) + (300 * 2.00) + (200 * 3.00) + ((unitConsumed - 800) * 4.00);
    }

    // Calculate total bill
    totalBill = charges;

    // Apply surcharge if bill exceeds Kshs. 500
    if (totalBill > 500) {
        surcharge = totalBill * 0.20;
        totalBill += surcharge;
    }

    // Ensure minimum bill is Kshs. 200
    if (totalBill < 200) {
        totalBill = 200;
    }

    // Display output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit (Ksh): %.2lf\n", charges);
    printf("Total Amount to Pay (Ksh): %.2lf\n", totalBill);

    return 0;
}
