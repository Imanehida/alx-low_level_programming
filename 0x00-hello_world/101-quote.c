#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to the standard error
 *
 * Return: Always 1
 */
int main(void)
{
const char message[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(message) - 1;

write(2, message, len);
return (1);
}
