#include <stdio.h>

int main() {
    int stock[10] = {50, 20, 80, 10, 40, 5, 90, 30, 15, 60};
    int minimum[10] = {40, 25, 70, 20, 40, 25, 50, 35, 30, 50};
    int total_reorder = 0;
    int max_gap = -1;
    int max_product = -1;

    for (int i = 0; i < 10; i++) {
        if (stock[i] < minimum[i]) {
            int gap = minimum[i] - stock[i];
            total_reorder += gap;
            printf("Product %d needs reorder: %d units\n", i, gap);
            if (gap > max_gap) {
                max_gap = gap;
                max_product = i;
            }
        }
    }

    printf("Largest reorder: Product %d (%d units)\n", max_product, max_gap);
    printf("Total reorder quantity: %d\n", total_reorder);

    return 0;
}