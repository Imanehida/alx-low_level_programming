#include <unistd.h>

/* Function to check if a character is lowercase */
int _islower(int c)
{
    /* ASCII value of lowercase alphabets ranges from 97 to 122 */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

/* Function to write a character to the standard output (stdout) */
int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return 0;
}
