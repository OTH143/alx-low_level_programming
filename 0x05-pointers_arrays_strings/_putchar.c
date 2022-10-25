#include <unistd.h>

/**
 * _putchar - prints the character to stdout
 * @c:the character to be printed
 *
 * Return:On succession 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
