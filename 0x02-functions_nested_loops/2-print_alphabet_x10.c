#include <stdio.h>

void print_alphabet_x10(void) {
    char letter = 'a';

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 26; j++) {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        letter = 'a'; // Reset the letter to 'a' for the next line
    }
}
