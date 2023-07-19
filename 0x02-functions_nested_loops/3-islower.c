#include <stdio.h>

/* Function to check if a character is lowercase */
int _islower(int c) {
    /* ASCII value of lowercase alphabets ranges from 97 to 122 */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

int main(void) {
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return 0;
}
