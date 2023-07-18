#include <stdio.h>

void print_alphabet_x10(void) {
    int repetition = 0;

    while (repetition < 10) {
        char letter = 'a';

        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }

        repetition++;
    }

    _putchar('\n');
}
