#include <stdio.h>


void calculateTax(double grossIncome, double *tax, double *netIncome) {
    *tax = 0;  // initialize tax

    if (grossIncome <= 20000) {
        *tax = 0;  // no tax
    } else if (grossIncome <= 50000) {
        *tax = 0.10 * (grossIncome - 20000);  
    } else {
        // Over 50,000
        *tax = 0.10 * (50000 - 20000);        
        *tax += 0.20 * (grossIncome - 50000); 
    }

    *netIncome = grossIncome - *tax;  
}

int main() {
    double grossIncome, tax, netIncome;

    printf("Enter gross income: $");
    scanf("%lf", &grossIncome);

    calculateTax(grossIncome, &tax, &netIncome);

    printf("Tax amount: $%.2lf\n", tax);
    printf("Net income: $%.2lf\n", netIncome);

    return 0;
}

