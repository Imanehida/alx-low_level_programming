#include "main.h"

void test_lower(int n)
{
	int r;

	r = lower(n);
	putchar(r + '0');
	putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	test_lower('H');
	return (0);
}
