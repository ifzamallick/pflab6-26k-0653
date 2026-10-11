#include <stdio.h>

int main() {
    int marks[15] = {85, 96, 72, 97, 60, 98, 45, 99, 88, 100, 79, 91, 65, 83, 94};
    int sum = 0;
    int count_100 = 0;
    int hi, lo;

    for (int i = 0; i < 15; i++) {
        if (marks[i] + 5 > 100) {
            marks[i] = 100;
        } else {
            marks[i] += 5;
        }

        sum += marks[i];

        if (i == 0) {
            hi = marks[i];
            lo = marks[i];
        } else {
            if (marks[i] > hi) hi = marks[i];
            if (marks[i] < lo) lo = marks[i];
        }

        if (marks[i] == 100) {
            count_100++;
        }
    }

    float avg = (float)sum / 15;
    int range = hi - lo;

    printf("New Average: %.2f\n", avg);
    printf("Students with 100: %d\n", count_100);
    printf("Range: %d\n", range);

    return 0;
}