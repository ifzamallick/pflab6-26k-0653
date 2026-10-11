#include <stdio.h>

int main() {
    int amount;
    int count = 0;
    int total = 0;

    printf("ATM Session Started. Enter 0 to exit.\n");

    while (1) {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount == 0) {
            break;
        }

        total += amount;
        count++;
    }

    printf("\n--- Session Summary ---\n");
    printf("Total transactions: %d\n", count);
    printf("Total amount withdrawn: %d\n", total);

    return 0;
}