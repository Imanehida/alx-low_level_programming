#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    long fibonacci[50];
    int i;

    fibonacci[0] = 1;
    fibonacci[1] = 2;

    for (i = 2; i < 50; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (i = 0; i < 49; i++)
    {
        printf("%ld, ", fibonacci[i]);
    }
    
    printf("%ld\n", fibonacci[49]);

    return (0);
}
