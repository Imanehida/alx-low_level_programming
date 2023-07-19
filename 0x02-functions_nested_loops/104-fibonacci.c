#include <stdio.h>
#include <gmp.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    mpz_t a, b, next;
    int count;

    mpz_init(a);
    mpz_init(b);
    mpz_init(next);

    mpz_set_ui(a, 1);
    mpz_set_ui(b, 2);

    printf("%s, %s", mpz_get_str(NULL, 10, a), mpz_get_str(NULL, 10, b));

    for (count = 2; count < 98; count++)
    {
        mpz_add(next, a, b);
        printf(", %s", mpz_get_str(NULL, 10, next));

        mpz_set(a, b);
        mpz_set(b, next);
    }

    printf("\n");

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(next);
}

int main(void)
{
    print_fibonacci();
    return 0;
}
