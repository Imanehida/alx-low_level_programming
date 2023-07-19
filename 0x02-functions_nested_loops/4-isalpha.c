#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	/* ASCII values of uppercase alphabets range from 65 to 90 */
	/* ASCII values of lowercase alphabets range from 97 to 122 */
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
