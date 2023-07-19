#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int lower(int c) {
    /* ASCII value of lowercase alphabets ranges from 97 to 122 */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

int main(void) {
    int r;

    r = lower('H');
    printf("%d", r);
    r = lower('o');
    printf("%d", r);
    r = lower(108);
    printf("%d\n", r);
    return 0;
}

