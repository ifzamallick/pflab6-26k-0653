#include <stdio.h>

int main() {
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};
    
    int total_money = 0;
    
    for (int i = 0; i < 5; i++) {
        total_money += (notes500[i] * 500) + (notes200[i] * 200) + (notes100[i] * 100);
    }
    
    int withdraw_amount;
    printf("Total money available: %d\n", total_money);
    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw_amount);
    
    if (withdraw_amount > total_money) {
        printf("Insufficient Funds\n");
    } else if (withdraw_amount % 100 != 0) {
        printf("Invalid Amount\n");
    } else {
        printf("Transaction Approved\n");
    }
    
    return 0;
}