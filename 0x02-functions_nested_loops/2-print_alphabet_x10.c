#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		letter = 'a'; /* Reset the letter to 'a' for the next line */
	}
}
