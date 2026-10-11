#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char passwords[5][50] = {"Pass123", "aB3$kL9xM", "hello", "SECURE2026!", "12345678"};
    int max_score = -999;
    char strongest[50] = "";
    int weak_count = 0;

    for (int i = 0; i < 5; i++) {
        int score = 0;
        int len = strlen(passwords[i]);

        for (int j = 0; j < len; j++) {
            char c = passwords[i][j];
            if (islower(c)) score += 1;
            else if (isupper(c)) score += 2;
            else if (isdigit(c)) score += 3;
        }

        if (len >= 8) score += 5;
        if (strstr(passwords[i], "123") != NULL) score -= 3;

        printf("%s Score: %d\n", passwords[i], score);

        if (score > max_score) {
            max_score = score;
            strcpy(strongest, passwords[i]);
        }

        if (score < 10) weak_count++;
    }

    printf("\nStrongest: %s (%d)\n", strongest, max_score);
    printf("Below 10: %d\n", weak_count);

    return 0;
}