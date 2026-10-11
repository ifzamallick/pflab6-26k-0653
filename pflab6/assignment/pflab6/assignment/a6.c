#include <stdio.h>

int main() {
    int gen[10];
    gen[0] = 1;
    gen[1] = 1;

    for (int i = 2; i < 10; i++) {
        gen[i] = gen[i - 1] + gen[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        printf("Generation %d: %d\n", i + 1, gen[i]);
    }

    return 0;
}