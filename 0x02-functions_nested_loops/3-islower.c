#include <stdio.h>

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1; /* Caractère en minuscule */
    } else {
        return 0; /* Caractère non en minuscule */
    }
}

int main(void) {
    char character = 'A';

    if (_islower(character)) {
        printf("Le caractère %c est en minuscule.\n", character);
    } else {
        printf("Le caractère %c n'est pas en minuscule.\n", character);
    }

    return 0;
}
