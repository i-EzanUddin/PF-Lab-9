#include <stdio.h>

double processTransaction(double remainingLimit, double transactionAmount) {
    if (transactionAmount <= remainingLimit) {
        remainingLimit = remainingLimit - transactionAmount;
        printf("Transaction APPROVED.\n");
    } else {
        printf("Transaction DECLINED.\n");
    }
    return remainingLimit;
}

int main() {
    double dailyLimit = 5000;
    double transaction;

    printf("Enter transaction amount: ");
    scanf("%lf", &transaction);

    dailyLimit = processTransaction(dailyLimit, transaction);

    printf("Remaining daily limit: %.2lf\n", dailyLimit);

    return 0;
}

