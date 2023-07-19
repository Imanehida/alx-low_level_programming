#include <stdio.h>

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
    printf("%d", r);
    r = islower('o');
    printf("%d", r);
    r = islower(108);
    printf("%d\n", r);
    return 0;
}
