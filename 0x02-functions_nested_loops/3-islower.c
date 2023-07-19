#include <stdio.h>

int islower(int c) {
    if (c >= 97 && c <= 122) {
        return 1; /* Caractère en minuscule */
    } else {
        return 0; /* Caractère non en minuscule */
    }
}

int main(void) {
    char character = 'A';

    if (islower((int)character)) {
        printf("Le caractère %c est en minuscule.\n", character);
    } else {
        printf("Le caractère %c n'est pas en minuscule.\n", character);
    }

    return 0;
}

