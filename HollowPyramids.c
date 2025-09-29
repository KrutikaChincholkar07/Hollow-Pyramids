#include <stdio.h>

int main() {
    int rows = 4;

    // Upper part
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        for (int j = 1; j <= 2 * (rows - i); j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }

    // Lower part
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        for (int j = 1; j <= 2 * (rows - i); j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }

    return 0;
}
