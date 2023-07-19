#include <stdio.h>
#include <main.h>

void print_alphabet_x10(void) {
    char letter = 'a';
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++) {
            putchar(letter);
            letter++;
        }
        putchar('\n');
        letter = 'a';
    }
}

int main(void) {
    print_alphabet_x10();
    return 0;
}
