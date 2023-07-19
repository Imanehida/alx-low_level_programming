#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n 
 * times table, starting with 0.
 * @n: The value for which the times table is to be printed.
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d", result);
			else
				printf(", %d", result / 100);
			printf("%02d", result % 100);
		}
		printf("\n");
	}
}