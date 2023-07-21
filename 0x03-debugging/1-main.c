#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: None
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    printf("Printing numbers from 0 to 9:\n");
    print_numbers();
    return (0);
}
