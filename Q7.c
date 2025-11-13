#include <stdio.h>

int calculateRental(int days, int kmDriven) {
    int cost = 40 * days;
    int extraKm = kmDriven - (100 * days);
    if (extraKm > 0) {
        cost += 25 * extraKm / 100; 
    }
    if (days >= 7) {
        cost = cost * 90 / 100;
    }
    return cost;
}

int main() {
    int days, kmDriven;
    printf("Enter number of rental days: ");
    scanf("%d", &days);
    printf("Enter kilometers driven: ");
    scanf("%d", &kmDriven);

    int totalCost = calculateRental(days, kmDriven);
    printf("Total rental cost: $%d\n", totalCost);

    return 0;
}

