#include <stdio.h>

int main() {
    int seats[15] = {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1};
    int booked = 0, empty = 0;
    int first_avail = -1, last_avail = -1;
    int booked_count = 0;

    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            booked++;
        } else {
            empty++;
            if (first_avail == -1) {
                first_avail = i + 1;
            }
            last_avail = i + 1;
        }

        if (seats[i] == 0 && booked_count < 3) {
            seats[i] = 1;
            booked_count++;
        }
    }

    printf("Booked: %d\n", booked);
    printf("Empty: %d\n", empty);
    printf("First available: %d\n", first_avail);
    printf("Last available: %d\n", last_avail);

    printf("Chart: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", seats[i]);
    }
    printf("\n");

    return 0;
}