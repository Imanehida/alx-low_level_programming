#include <stdio.h>

/* Function to check if a character is lowercase */
int islower(int c) {
    /* ASCII value of lowercase alphabets ranges from 97 to 122 */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

int main(void) {
    int r;

    r = islower('H');
    putchar(r + '0');
    r = islower('o');
    putchar(r + '0');
    r = islower(108);
    putchar(r + '0');
    putchar('\n');
    return 0;
}
