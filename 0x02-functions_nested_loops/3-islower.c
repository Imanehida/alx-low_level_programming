/* _islower.c */
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    /* ASCII value of lowercase alphabets ranges from 97 to 122 */
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
/* _putchar.c */
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}
/* 3-main.c */
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
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
    return (0);
}
