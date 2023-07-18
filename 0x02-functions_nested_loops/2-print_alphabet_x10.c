#include <stdio.h>

void print_alphabet_x10(void) {
    char letter = 'a';
    int i;

    for (i = 0; i < 10; i++) {
        while (letter <= 'z') {
            putchar(letter);
            letter++;
        }
        letter = 'a';  /* Reset letter to 'a' for the next line */
        putchar('\n');
    }
}

int main(void) {
    print_alphabet_x10();
    return 0;
}
