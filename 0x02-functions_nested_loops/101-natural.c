#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    int count;
    long double n1 = 1, n2 = 2, next;

    printf("%.0Lf, %.0Lf, ", n1, n2);

    for (count = 3; count <= 50; count++)
    {
        next = n1 + n2;
        printf("%.0Lf", next);

        if (count < 50)
            printf(", ");

        n1 = n2;
        n2 = next;
    }

    printf("\n");
    return (0);
}
