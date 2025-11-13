#include <stdio.h>

// Function to calculate total bill
double calculateBill(double foodCost, int numPeople) {
    double tax = 0.08 * foodCost;   // 8% tax
    double tip;
    double serviceCharge = 0;

    // Tip calculation
    if (foodCost > 50) {
        tip = 0.15 * foodCost;     // 15% tip
    } else {
        tip = 0.10 * foodCost;     // 10% tip
    }

    // Service charge for large groups
    if (numPeople > 6) {
        serviceCharge = 0.05 * foodCost;  // 5% service charge
    }

    double totalBill = foodCost + tax + tip + serviceCharge;
    return totalBill;
}

int main() {
    double foodCost;
    int numPeople;

    printf("Enter food cost: $");
    scanf("%lf", &foodCost);

    printf("Enter number of people: ");
    scanf("%d", &numPeople);

    double total = calculateBill(foodCost, numPeople);

    printf("Total bill (including tax, tip, and service charge): $%.2lf\n", total);

    return 0;
}

