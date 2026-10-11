#include <stdio.h>

int main() {
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int flag_count = 0;
    int normal_sum = 0;
    int normal_count = 0;
    int max_amt = transfers[0];

    for (int i = 0; i < 10; i++) {
        if (transfers[i] < 100 || transfers[i] > 200000) {
            flag_count++;
        } else {
            normal_sum += transfers[i];
            normal_count++;
        }

        if (transfers[i] > max_amt) {
            max_amt = transfers[i];
        }
    }

    float avg = (normal_count > 0) ? (float)normal_sum / normal_count : 0;

    printf("Flagged: %d\n", flag_count);
    printf("Normal Avg: %.2f\n", avg);
    printf("Largest: %d\n", max_amt);

    return 0;
}